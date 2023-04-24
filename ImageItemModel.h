
#ifndef IMAGEITEMMODEL_H
#define IMAGEITEMMODEL_H

#include <QAbstractListModel>
#include "ImgUtils.h"

// Image View Item Model
class ImageItemModel : public QAbstractListModel
{
    Q_OBJECT

public:
    explicit ImageItemModel(QObject *parent = nullptr);

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    // add ImageName data to this model
    void addData(const ImageName& data);

    // add multi ImageName data to this model
    void addData(const std::vector<ImageName>& datas);

    // empty images data;
    void clearData();

private:
    std::vector<ImageName> m_imageNames;
};

#endif // IMAGEITEMMODEL_H
