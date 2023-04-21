#include "AlgLineFit.h"
#include "ui_AlgLineFit.h"

AlgLineFit::AlgLineFit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AlgLineFit)
{
    ui->setupUi(this);
}

AlgLineFit::~AlgLineFit()
{
    delete ui;
}
