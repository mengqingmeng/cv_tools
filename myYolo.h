#pragma once

#include <vector>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <fstream>
#include <QDebug>

using  namespace std;

enum class YoloMode {

};

struct BoxItem {
    cv::Rect box;
    int label;
    float conf;
    BoxItem()
    {
        label = -1;
        conf = 0;
    }
};

struct CNNConfig {
	std::string model_path;
	std::string names_path;
	int x = 0;
	int y = 0;
	int width = 0;
	int height = 0;
	int inputWidth = 640;
	int inputHeight = 640;
	int numOfClass = 1;
	float confThreshold = 0.25;
	float objThreshold = 0.25;
	float nmsThreshold = 0.45;
};
class MyYolo {
	

public:
	void onnxDetect(cv::Mat& image, std::vector<BoxItem>& results);
	void readNames(std::string& path, std::vector<std::string>& names);
	void setConfig(const CNNConfig cfg);
	void setNet(const cv::dnn::Net n);
	void getConfig(CNNConfig& cfg);
	void changeConf(float conf);
private:
	const float netAnchors[3][6] = { {10.0, 13.0, 16.0, 30.0, 33.0, 23.0}, {30.0, 61.0, 62.0, 45.0, 59.0, 119.0},{116.0, 90.0, 156.0, 198.0, 373.0, 326.0} };
	const float netStride[3] = { 8.0, 16.0, 32.0 };
	CNNConfig config;
	cv::dnn::Net net;
};
