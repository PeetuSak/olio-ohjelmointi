#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    lineEdit = ui->lineEdit;
    countButton = ui->countButton;
    resetButton = ui->resetButton;

    connect(countButton, &QPushButton::clicked, this, &MainWindow::countButton_clicked);
    connect(resetButton, &QPushButton::clicked, this, &MainWindow::resetButton_clicked);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::countButton_clicked()
{
    int currentNumber = lineEdit->text().toInt();
    int newNumber = currentNumber + 1;
    lineEdit->setText(QString::number(newNumber));
}

void MainWindow::resetButton_clicked()
{
    lineEdit->setText("0");
}
