
#include "MainWindow.h"
#include "ui_MainWindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("cv_tools"));
    setWindowIcon(QIcon("images/logo.png"));

    m_algsPage = new AlgsPage(this);

    // algs btn clicked,show AlgsPage.
    connect(ui->algsPageBtn,&QPushButton::clicked,this,[&](){
        m_algsPage->showMaximized();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}


