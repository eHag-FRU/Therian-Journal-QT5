#include "mainwindow.h"
#include "./ui_mainwindow.h"

//Added includes
#include "about.h"
#include "entryedit.h"
#include "kin.h"


#include <QIcon>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Therian Journal");

    this->setWindowIcon(QIcon(":/Images/icon.png"));

    qDebug() << database.drivers();


    database.addDatabase("QSQLITE", "./Database.sql");

    database.open();

    qDebug() << "Does connection exist?: " << database.isOpen();

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
    //Making the add entry widget and showing

    JournalEntry* test = new JournalEntry();

    EntryEdit* editWindow = new EntryEdit(this, test);

    editWindow->exec();


    qDebug() << "Now on the main window";
    qDebug() << "The kin in the journal entry is: " << test->getKin();


    ui->entriesLayout->addWidget(test);
}

void MainWindow::on_actionAdd_Kin_Personality_triggered()
{
    qDebug() << "Now making kin add widget";

    Kin* newKin = new Kin(this);

    newKin->show();
}


void MainWindow::on_addJournalEntryButton_clicked()
{
    //Calls the method already implemented
    this->on_actionAdd_Entry_triggered();
}


void MainWindow::on_pushButton_clicked()
{
    //Calls the method already implemented
    this->on_actionAdd_Kin_Personality_triggered();
}

