#ifndef IMAGESVIEWER_H
#define IMAGESVIEWER_H

#include <QWidget>
#include <opencv.hpp>
#include <ImgUtils.h>
#include "ImageItemModel.h"
#include "ImageItemDelegate.h"

namespace Ui {
class ImagesViewer;
}

// Image Viewer: contain a main viewer and bottom images list
class ImagesViewer : public QWidget
{
    Q_OBJECT

public:
    explicit ImagesViewer(QWidget *parent = nullptr);
    ~ImagesViewer();

    // 显示图片
    void showImages(const std::vector<ImageName>& allImages);

private:
    Ui::ImagesViewer *ui;
    ImageItemModel* m_itemModel;
    ImageItemDelegate* m_itemDelegate;
    int m_curRow;

};

#endif // IMAGESVIEWER_H
