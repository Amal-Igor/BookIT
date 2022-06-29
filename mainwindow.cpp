#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->tbDisplay->horizontalHeader()->setStretchLastSection(true); Adjust horizontal header to the windows

    // Setting horizontal header label
//    ui->tbDisplayFlights->horizontalHeaderItem(0)->setText("Aircraft ID");
//    ui->tbDisplayFlights->horizontalHeaderItem(1)->setText("FLight ID");
//    ui->tbDisplayFlights->horizontalHeaderItem(2)->setText("Manufacturer");
//    ui->tbDisplayFlights->horizontalHeaderItem(3)->setText("Avaible seats");
//    ui->tbDisplayFlights->horizontalHeaderItem(4)->setText("Travel time");

}

MainWindow::~MainWindow()
{
    delete ui;
}

