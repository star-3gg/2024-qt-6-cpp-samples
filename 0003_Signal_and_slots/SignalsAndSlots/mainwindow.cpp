#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Normalize bar range to slider range
    ui->progressBar->setRange(ui->horizontalSlider->minimum(),
                             ui->horizontalSlider->maximum());

    // Initialize with correct value
    ui->progressBar->setValue(ui->horizontalSlider->value());

    /**
     * This connects a signal to a slot.
     * The order of the arguments is:
     *  1. sender
     *  2. signal
     *  3. receiver
     *  4. slot
     */
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)), // Sender / signal
            ui->progressBar,SLOT(setValue(int))); // Receiver / slot

    // The Connection can also be removed again:
    // disconnect(ui->horizontalSlider,SIGNAL(valueChanged(int)), // Sender / signal
            // ui->progressBar,SLOT(setValue(int))); // Receiver / slot
}

MainWindow::~MainWindow()
{
    delete ui;
}
