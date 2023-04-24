#include "QWGraphicsView.h"

QWGraphicsView::QWGraphicsView(QWidget* parent)
{
    scene = new QGraphicsScene;
//    scene->addPixmap(defaultImg.scaled(ui.graphicsView->size()));
    scene->setBackgroundBrush(QBrush(Qt::Dense7Pattern));
    setScene(scene);
    setOptimizationFlags(QGraphicsView::DontAdjustForAntialiasing | QGraphicsView::DontSavePainterState);
    setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);
    setTransformationAnchor(QGraphicsView::AnchorUnderMouse);

    // 设置 QGraphicsView 的交互模式以支持缩放
    setDragMode(QGraphicsView::ScrollHandDrag);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setRenderHint(QPainter::Antialiasing, true);
    setOptimizationFlag(QGraphicsView::DontAdjustForAntialiasing, true);
    setOptimizationFlag(QGraphicsView::DontSavePainterState, true);
    setInteractive(true);
    setMouseTracking(true);
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    //setSceneRect(0,0,this->size().width(),this->size().height());
}

void QWGraphicsView::showImg(const cv::Mat &inImage)
{
    scene->clear();

    QImage qImage = ImgUtils::matToQImage(inImage);
    showImg(qImage);
}

void QWGraphicsView::showImg(const QImage &inImage)
{
    m_qImage = inImage;
    scene->clear();
    scene->addPixmap(QPixmap::fromImage(m_qImage));
    scene->addRect(m_qImage.rect(), QPen(Qt::darkGreen));
}

void QWGraphicsView::showCursorInfo(const QPointF &point)
{
    MouseData mouseData;
    getMouseData(point,mouseData);
}

void QWGraphicsView::getMouseData(const QPointF &pos, MouseData &mouseData)
{
    //QPointF posScaled(static_cast<float>(pos.x()) / sceneRect().width(), static_cast<float>(pos.y()) / sceneRect().height());

    int x = pos.x();
    int y = pos.y();
    if(x > m_qImage.width() || x<0 || y < 0 || y>m_qImage.height()){
        return;
    }
    QRgb rgb = m_qImage.pixel(x, y);
    QColor pointColor = QColor(rgb);
    int blue = pointColor.blue();
    int green = pointColor.green();
    int red = pointColor.red();
    int gray = qGray(rgb);

    mouseData = MouseData(x,y,blue,green,red,gray);
}

void QWGraphicsView::mouseMoveEvent(QMouseEvent* event)
{
    viewport()->setCursor(Qt::CrossCursor);
    QPointF pos = mapToScene(event->pos());
    MouseData mouseData;
    getMouseData(pos,mouseData);
    emit mouseMovePoint(mouseData);
	QGraphicsView::mouseMoveEvent(event);
}

void QWGraphicsView::mousePressEvent(QMouseEvent* event)
{
//	if (event->button() == Qt::LeftButton) {
//		QPointF pos = mapToScene(event->pos());

//        MouseData mouseData;
//        getMouseData(pos,mouseData);
//	}

    QGraphicsView::mousePressEvent(event);
}

void QWGraphicsView::wheelEvent(QWheelEvent *event)
{
    if (event->modifiers() & Qt::ControlModifier)
    {
        // 缩放视图
        double scale = std::pow(1.0015, event->angleDelta().y());
        this->scale(scale, scale);
        event->accept();
    }
    else
    {
        QGraphicsView::wheelEvent(event);
    }

}
