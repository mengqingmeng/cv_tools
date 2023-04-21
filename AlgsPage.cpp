#include "AlgsPage.h"
#include "ui_AlgsPage.h"

AlgsPage::AlgsPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlgPage)
{
    ui->setupUi(this);
    setWindowTitle(tr("Algs"));
}

AlgsPage::~AlgsPage()
{
    delete ui;
}
