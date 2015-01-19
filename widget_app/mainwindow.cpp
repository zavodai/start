#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(pressed()), this, SLOT(OnButtonPressed()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::OnButtonPressed()
{
    QString sLabela = "Test";
    ui->label->setText(sLabela);
}

