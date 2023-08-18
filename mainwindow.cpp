#include "mainwindow.h"
#include "./ui_mainwindow.h"

//Added includes
#include "about.h"
#include "addjournalentry.h"

#include <QIcon>
#include <QDebug>

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
    qDebug() << "Making about widget";

    About* newAbout = new About(this);

    qDebug() << "Showing about widget";
    newAbout->show();
}


void MainWindow::on_exitTherianJournal_triggered()
{
    //Hides before destroying
    qDebug() << "Hiding main window";
    this->hide();

    delete this;
}


void MainWindow::on_actionAdd_Entry_triggered()
{
    //Making new journal entry
    qDebug()<< "Making addJournalEntry widget";
    addJournalEntry* newJournalEntry = new addJournalEntry(this);

    qDebug() << "Showing addJournalEntry widget";
    newJournalEntry->show();
}

