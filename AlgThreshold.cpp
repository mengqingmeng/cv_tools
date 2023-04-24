#include "AlgThreshold.h"
#include "ui_AlgThreshold.h"

AlgThreshold::AlgThreshold(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AlgThreshold)
{
    ui->setupUi(this);
}

AlgThreshold::~AlgThreshold()
{
    delete ui;
}
