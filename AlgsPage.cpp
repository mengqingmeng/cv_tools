#include "AlgsPage.h"
#include "ui_AlgsPage.h"

AlgsPage::AlgsPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlgsPage)
{
    ui->setupUi(this);
    setWindowTitle(tr("算法"));
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);
    objectDetectionNames = {tr("二值化"),tr("直线检测"),tr("直线拟合")};
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
