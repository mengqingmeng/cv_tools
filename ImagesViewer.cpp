#include "ImagesViewer.h"
#include "ui_ImagesViewer.h"

ImagesViewer::ImagesViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ImagesViewer)
{
    ui->setupUi(this);

    m_curRow = -1;

    m_itemModel = new ImageItemModel(this);
    m_itemDelegate = new ImageItemDelegate(this);

    ui->listView->setModel(m_itemModel);
    ui->listView->setItemDelegate(m_itemDelegate);
    //ui->listView->setStyleSheet("QListView::item:selected { background-color: #abcdef; }");
    // show image in main viewer when bottom item clicked
    connect(ui->listView,&QListView::clicked,this,[&](const QModelIndex &index){
        QImage image = index.data(Qt::DecorationRole).value<QImage>();
        QString name = index.data(Qt::DisplayRole).toString();
        ui->graphicsView->showImg(image);
        qDebug() << name;

        m_curRow = index.row();
        ui->listView->selectionModel()->select(index, QItemSelectionModel::ClearAndSelect);
        ui->listView->viewport()->update();
    });
}

ImagesViewer::~ImagesViewer()
{
    delete ui;
}

void ImagesViewer::showImages(const std::vector<ImageName>& allImages)
{
    if(!allImages.empty()){
        m_itemModel->clearData();
        m_itemModel->addData(allImages);
        if(m_curRow != -1 && m_curRow < allImages.size()){
            ImageName imageName = allImages.at(m_curRow);
            ui->graphicsView->showImg(ImgUtils::matToQImage(imageName.image));
        }
    }
}
