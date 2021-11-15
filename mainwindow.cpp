#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_pushButtonTakeoff_released()
{
    ui->label->setText("Takeoff was pressed.");
}

void MainWindow::on_pushButtonLand_released()
{
    ui->label->setText("Land was pressed.");
}


void MainWindow::on_pushButtonArm_released()
{
    ui->label->setText("Arm was pressed.");
}

