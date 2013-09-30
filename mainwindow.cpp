#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "custombutton1.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CustomButton1 *b = new CustomButton1(this);
    b->setText(tr("Press me!"));
    ui->verticalLayout->addWidget( b );
}

MainWindow::~MainWindow()
{
    delete ui;
}
