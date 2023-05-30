#include <opencv2/opencv.hpp>
#include "myYolo.h"

void MyYolo::onnxDetect(cv::Mat& image, std::vector<BoxItem>& results)
{
    if (image.empty()) {
        qDebug() << QString::fromLocal8Bit("深度学习检测，图像为空");
		return;
	}
	int netWidth = config.inputWidth;
	int netHeight = config.inputHeight;
	int numOfClass = config.numOfClass;

	cv::Mat imgResized;

	cv::Mat srcResized;
	// 原始图像大小
	size_t srcWidth = image.cols;
	size_t srcHeight = image.rows;

	// 计算目标图像大小与原始图像宽高的比例，并取其中的较小值
	float ratioW = 1.0 * netWidth / srcWidth;
	float ratioH = 1.0 * netHeight / srcHeight;
	float ratio = std::min(ratioW, ratioH);

	// 计算图像(真实图像)调整后的大小
	cv::Size newCenterImgSize = cv::Size(ratio * srcWidth, ratio * srcHeight);
	if (newCenterImgSize.empty()) {
        qWarning() << QString::fromLocal8Bit("调整后图片大小为空");
		throw "调整后图片大小为空";
	}
	cv::resize(image, srcResized, newCenterImgSize);

	// 计算填充像素数
	int paddingW = netWidth - newCenterImgSize.width;
	int paddingH = netHeight - newCenterImgSize.height;

	float paddingTop = 0.0, paddingBootom = 0.0, paddingLeft = 0.0, paddingRight = 0.0;
	paddingTop = paddingH / 2;
	paddingBootom = paddingH - paddingTop;
	paddingLeft = paddingW / 2;
	paddingRight = paddingW - paddingLeft;

	// 填充
	cv::copyMakeBorder(srcResized, imgResized, paddingTop, paddingBootom, paddingLeft, paddingRight, cv::BORDER_CONSTANT, cv::Scalar(0, 0, 0));

	//ImgUtils::resizeImgKeepRatio(image, getInpuSize(), imgResized);

	cv::Mat blob;
	cv::dnn::blobFromImage(imgResized, blob, 1 / 255.0, cv::Size(netWidth, netHeight), cv::Scalar(0, 0, 0), true, false);
	net.setInput(blob);
	std::vector<cv::Mat> netOutputImg;
	try {
		net.forward(netOutputImg, net.getUnconnectedOutLayersNames());
	}
    catch (cv::Exception& e) {
        qWarning() << QString::fromLocal8Bit("推理错误:%1").arg(QString::fromStdString(e.msg));
		return;
	}

	//接上面
	std::vector<int> classIds;//结果id数组
	std::vector<float> confidences;//结果每个id对应置信度数组
	std::vector<cv::Rect> boxes;//每个id矩形框
	int net_width = config.numOfClass + 5;  //输出的网络宽度是类别数+5
	float* pdata = (float*)netOutputImg[0].data;
	for (int stride = 0; stride < 3; stride++) {    //stride
        //int grid_x = (int)(netWidth / netStride[stride]);
		int grid_y = (int)(netHeight / netStride[stride]);
		for (int anchor = 0; anchor < 3; anchor++) { //anchors
            //const float anchor_w = netAnchors[stride][anchor * 2];
            //const float anchor_h = netAnchors[stride][anchor * 2 + 1];
			for (int i = 0; i < grid_y; i++) {
				for (int j = 0; j < grid_y; j++) {
					float box_score = pdata[4];//获取每一行的box框中含有某个物体的概率
					// std::cout << "box score : " << box_score << std::endl;
					if (box_score > config.confThreshold) {
						//为了使用minMaxLoc(),将85长度数组变成Mat对象
						cv::Mat scores(1, config.numOfClass, CV_32FC1, pdata + 5);
						cv::Point classIdPoint;
						double max_class_socre;
						minMaxLoc(scores, 0, &max_class_socre, 0, &classIdPoint);
						if (max_class_socre > config.objThreshold) {
							//rect [x,y,w,h]
							float cx = pdata[0];  //cx
							float cy = pdata[1];   //cy
							float w = pdata[2];   //w
							float h = pdata[3];  //h
							int left = (cx - 0.5 * w - paddingLeft) / ratio;
							int top = (cy - 0.5 * h - paddingTop) / ratio;
							classIds.push_back(classIdPoint.x);
							confidences.push_back(max_class_socre * box_score);
							boxes.push_back(cv::Rect(left, top, int(w / ratio), int(h / ratio)));
						}
					}
					pdata += net_width;//指针移到下一行
				}
			}
		}
	}


	// Perform non maximum suppression to eliminate redundant overlapping boxes with
	// lower confidences
	// Perform non maximum suppression to eliminate redundant overlapping boxes with
	// lower confidences
	std::vector<int> indices;
	cv::dnn::NMSBoxes(boxes, confidences, config.confThreshold, config.nmsThreshold, indices);
	for (size_t i = 0; i < indices.size(); ++i)
	{
		int idx = indices[i];
		cv::Rect box = boxes[idx];
		BoxItem boxItem;
		boxItem.box = box;
		boxItem.conf = confidences[idx];
		boxItem.label = classIds[idx];
		results.push_back(boxItem);
	}

}

void MyYolo::readNames(std::string& path, std::vector<std::string>& names_)
{
	if (path.empty()) { return; }
	std::ifstream classNamesFile(path.c_str());
	if (classNamesFile.is_open())
	{
		std::string className = "";
		while (std::getline(classNamesFile, className))
			names_.push_back(className);
	}
}

void MyYolo::setConfig(const CNNConfig cfg)
{
	config = cfg;
}

void MyYolo::setNet(const cv::dnn::Net n)
{
	net = n;
}

void MyYolo::getConfig(CNNConfig& cfg)
{
	cfg = config;
}

void MyYolo::changeConf(float conf)
{
	config.confThreshold = conf;
}

