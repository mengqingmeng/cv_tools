#pragma once
#include <QGraphicsView>
#include <QMouseEvent>
#include <QWheelEvent>
#include <QGraphicsScene>
#include <opencv.hpp>
#include "ImgUtils.h"

class QWGraphicsView : public QGraphicsView
{
	Q_OBJECT;
protected:
	void mouseMoveEvent(QMouseEvent* event) override;
	void mousePressEvent(QMouseEvent* event) override;
    void wheelEvent(QWheelEvent* event) override;
public:
	QWGraphicsView(QWidget* parent = 0);
    void showImg(const cv::Mat& inImage);

signals:
	void mouseMovePoint(QPointF point);
	void mouseClicked(QPointF point);

private:
    QGraphicsScene* scene;
};

