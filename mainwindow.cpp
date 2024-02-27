#include "mainwindow.h"
#include "./ui_mainwindow.h"

// //TODO: start new mainwindow ===> load googleAPI and get Author information
// QString MainWindow::getAuthor() {

// }
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
