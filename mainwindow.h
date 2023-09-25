#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtSql>
#include <QSqlQuery>

//Added includes
#include "journalentry.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void addEntry(JournalEntry);

private slots:
    void on_aboutTherianJournal_triggered();

    void on_exitTherianJournal_triggered();

    void on_actionAdd_Entry_triggered();

    void on_actionAdd_Kin_Personality_triggered();

    void on_addJournalEntryButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    //The vector to hold the current layout of the journal entries, TEMP
    QVector<JournalEntry*> entries;


    QSqlDatabase database;
};
#endif // MAINWINDOW_H
