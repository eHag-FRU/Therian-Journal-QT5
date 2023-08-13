#include "mainwindow.h"
#include "./ui_mainwindow.h"

//Added includes
#include "about.h"

#include <QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Therian Journal");

    this->setWindowIcon(QIcon(":/Images/icon.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_aboutTherianJournal_triggered()
{
    //Make new widget

    About* newAbout = new About(this);

    newAbout->show();
}


void MainWindow::on_exitTherianJournal_triggered()
{
    //Hides before destroying
    this->hide();

    delete this;
}

