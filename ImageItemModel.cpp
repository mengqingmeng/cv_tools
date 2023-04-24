
#include "ImageItemModel.h"


ImageItemModel::ImageItemModel(QObject *parent)
    : QAbstractListModel(parent)
{
}

int ImageItemModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    return m_imageNames.size();
}

QVariant ImageItemModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid() || index.row() >= m_imageNames.size())
        return QVariant();

    if(role == Qt::DisplayRole){
        return m_imageNames.at(index.row()).name;
    }else if(role == Qt::DecorationRole){
        return ImgUtils::matToQImage(m_imageNames.at(index.row()).image);
    }

    return QVariant();
}

void ImageItemModel::addData(const ImageName &data)
{
    beginInsertRows(QModelIndex(),m_imageNames.size(),m_imageNames.size());
    m_imageNames.push_back(data);
    endInsertRows();
}

void ImageItemModel::addData(const std::vector<ImageName> &datas)
{
    beginInsertRows(QModelIndex(),m_imageNames.size(),m_imageNames.size());
    m_imageNames.insert(m_imageNames.end(),datas.begin(),datas.end());
    endInsertRows();
}

void ImageItemModel::clearData()
{
    beginInsertRows(QModelIndex(),m_imageNames.size(),m_imageNames.size());
    m_imageNames.clear();
    endInsertRows();
}

