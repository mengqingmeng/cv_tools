#include "AlgLineDetection.h"
#include "ui_AlgLineDetection.h"

AlgLineDetection::AlgLineDetection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AlgLineDetection)
{
    ui->setupUi(this);
    ui->cannySobelVal->addItems(sobelValues);
}

AlgLineDetection::~AlgLineDetection()
{
    delete ui;
}
