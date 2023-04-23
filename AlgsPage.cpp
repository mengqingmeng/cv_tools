#include "AlgsPage.h"
#include "ui_AlgsPage.h"

AlgsPage::AlgsPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlgsPage)
{
    ui->setupUi(this);
    setWindowTitle(tr("Algs"));
    objectDetectionNames = {tr("基本操作"),tr("直线检测"),tr("直线拟合")};
    ui->objectDetectionItems->addItems(objectDetectionNames);

    initAlgsPage();

    connect(ui->objectDetectionItems,&QListWidget::currentRowChanged,this,[&](int currentRow){
        ui->rightMainCon->setCurrentIndex(currentRow);
    });

}

AlgsPage::~AlgsPage()
{
    delete ui;
}

void AlgsPage::initAlgsPage()
{
    algLineDetection = new AlgLineDetection(this);
    algLineFit = new AlgLineFit(this);


    ui->rightMainCon->addWidget(algLineDetection);
    ui->rightMainCon->addWidget(algLineFit);
}
