#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto variantManager = new QtVariantPropertyManager();
    auto qt_proto = new Qt_proto_lib();
}

MainWindow::~MainWindow()
{
    delete ui;
}

