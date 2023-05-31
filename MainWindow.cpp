
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
    m_dlPage = new DLPage(this);

    // algs btn clicked,show AlgsPage.
    connect(ui->algsPageBtn,&QPushButton::clicked,this,[&](){
        m_algsPage->showMaximized();
    });

    // 深度学习按钮点击
    connect(ui->dlPageBtn,&QPushButton::clicked,this,[&](){
        m_dlPage->showMaximized();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}


