#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) // Constructor
    , ui(new Ui::MainWindow) // Initialzies new MainWindow ui object
{
    ui->setupUi(this); // Open a window
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonClose_clicked()
{
    ui->label->setText("Button is clicked"); // Update the text of our label
}

