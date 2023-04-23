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

    m_qImage = ImgUtils::matToQImage(inImage);
    scene->addPixmap(QPixmap::fromImage(m_qImage));
    scene->addRect(m_qImage.rect(), QPen(Qt::darkGreen));
}

void QWGraphicsView::mouseMoveEvent(QMouseEvent* event)
{
	viewport()->setCursor(Qt::CrossCursor);
	QPoint pos = event->pos();
	emit mouseMovePoint(pos);
	QGraphicsView::mouseMoveEvent(event);
}

void QWGraphicsView::mousePressEvent(QMouseEvent* event)
{
	if (event->button() == Qt::LeftButton) {
		QPointF pos = mapToScene(event->pos());
        QPointF posScaled(static_cast<float>(pos.x()) / sceneRect().width(), static_cast<float>(pos.y()) / sceneRect().height());

        int x = posScaled.x();
        int y = posScaled.y();
        QRgb rgb = m_qImage.pixel(x, y);
        QColor pointColor = QColor(rgb);
        int blue = pointColor.blue();
        int green = pointColor.green();
        int red = pointColor.red();
        int gray = qGray(rgb);

        emit mouseClicked(MouseData(x,y,blue,green,red,gray));
	}

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
