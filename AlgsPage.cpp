#include "AlgsPage.h"
#include "ui_AlgsPage.h"

AlgsPage::AlgsPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlgsPage)
{
    ui->setupUi(this);
    setWindowTitle(tr("算法"));
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);

    // 基础操作
    baseOperateNames = {tr("二值化")};
    ui->baseOperateItems->addItems(baseOperateNames);

    // 目标检测
    objectDetectionNames = {tr("直线检测"),tr("直线拟合")};
    ui->objectDetectionItems->addItems(objectDetectionNames);

    allNames.append(baseOperateNames);
    allNames.append(objectDetectionNames);

    initAlgsPage();

    connect(ui->objectDetectionItems,&QListWidget::itemClicked,this,[&](QListWidgetItem *item){

        int index = allNames.indexOf(item->text());
        if(index >= 0)
            ui->rightMainCon->setCurrentIndex(index);
    });

    connect(ui->baseOperateItems,&QListWidget::itemClicked,this,[&](QListWidgetItem *item){
        int index = allNames.indexOf(item->text());
        if(index >= 0)
            ui->rightMainCon->setCurrentIndex(index);
    });
}

AlgsPage::~AlgsPage()
{
    delete ui;
}

void AlgsPage::initAlgsPage()
{
    // 算法页面
    algThreshold = new AlgThreshold(this);
    algLineDetection = new AlgLineDetection(this);
    algLineFit = new AlgLineFit(this);

    ui->rightMainCon->insertWidget(0,algThreshold);
    ui->rightMainCon->insertWidget(1,algLineDetection);
    ui->rightMainCon->insertWidget(2,algLineFit);
}
