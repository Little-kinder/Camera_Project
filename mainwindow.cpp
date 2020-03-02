#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"
#include "connection.cpp"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connection connect;
    connect.debutprogramme();
}

MainWindow::~MainWindow()
{
    delete ui;
}
