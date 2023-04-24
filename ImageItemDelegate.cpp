
#include "ImageItemDelegate.h"

ImageItemDelegate::ImageItemDelegate(QObject *parent)
{

}

void ImageItemDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    painter->setPen(Qt::transparent);

    QRect rect = option.rect;
    QImage image = index.data(Qt::DecorationRole).value<QImage>();
    QPixmap pixmap = QPixmap::fromImage(image).scaled(76,76,Qt::KeepAspectRatio);
    QString name = index.data(Qt::DisplayRole).toString();

    // draw image
    painter->drawPixmap(rect.x() + 2, rect.y() + 2, pixmap);

    // draw name
    QFont font("Arial", 10);
    QFontMetrics fm(font);
    painter->setFont(font);
    painter->setPen(Qt::black);
    painter->drawText(rect.x() + qMax(0,40 - fm.horizontalAdvance(name) / 2), rect.height() - 10, name);

    // draw outer rect
    if(option.state & QStyle::State_Selected){
        painter->setPen(Qt::blue);
    }else{
        painter->setPen(Qt::gray);
    }

    painter->drawRect(rect.x(),rect.y()+1,rect.width()-2,rect.height()-6);
}

QSize ImageItemDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QSize size = QStyledItemDelegate::sizeHint(option, index);
    size.setHeight(100);
    size.setWidth(80);
    return size;
}

bool ImageItemDelegate::editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index)
{
    if (event->type() == QEvent::MouseButtonPress)
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        if (mouseEvent->button() == Qt::RightButton){
            QMenu menu;
            QAction* saveAction = menu.addAction(tr("保存"));

            QAction* selectedAction = menu.exec(mouseEvent->globalPosition().toPoint());

            if (selectedAction == saveAction)
            {
                QImage image = index.data(Qt::DecorationRole).value<QImage>();
                QString fileName = QFileDialog::getSaveFileName(nullptr,
                                                                tr("保存图片"),
                                                                ImgUtils::getCurFileName(),
                                                                tr("Images (*.png)"));
                if(!fileName.isEmpty()){
                    image.save(fileName);
                }
            }
        }
    }

    return QStyledItemDelegate::editorEvent(event, model, option, index);
}
