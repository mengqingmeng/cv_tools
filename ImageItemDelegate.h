
#ifndef IMAGEITEMDELEGATE_H
#define IMAGEITEMDELEGATE_H

#include <QStyledItemDelegate>

#include <QObject>
#include <QPainter>
#include <QMenu>
#include <QMouseEvent>
#include <QFileDialog>
#include "ImgUtils.h"

class ImageItemDelegate : public QStyledItemDelegate
{
    Q_OBJECT;
public:
    explicit ImageItemDelegate(QObject* parent = nullptr);
    void paint(QPainter* painter,const QStyleOptionViewItem& option,const QModelIndex& index) const override;
    QSize sizeHint(const QStyleOptionViewItem& option,const QModelIndex& index) const override;
    bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override;
};

#endif // IMAGEITEMDELEGATE_H
