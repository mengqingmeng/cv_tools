#pragma once
#include <QGraphicsView>
#include <QMouseEvent>
#include <QGraphicsScene>

class QWGraphicsView : public QGraphicsView
{
	Q_OBJECT;
protected:
	void mouseMoveEvent(QMouseEvent* event) override;
	void mousePressEvent(QMouseEvent* event) override;
public:
	QWGraphicsView(QWidget* parent = 0);

signals:
	void mouseMovePoint(QPointF point);
	void mouseClicked(QPointF point);

private:
    QGraphicsScene* scene;
};

