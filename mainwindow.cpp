#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "CSSButton.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CSSButton *b = new CSSButton(this);
    b->setText(tr("Press me!"));
    ui->verticalLayout->addWidget( b );
}

MainWindow::~MainWindow()
{
    delete ui;
}
