#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "book.h"
#include "condition.h"
#include "bus.h"
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase  db;
    db=QSqlDatabase ::addDatabase("QSQLITE");
    db.setDatabaseName("e:\\d.db");
    db.open();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Book *showbook = new Book();
    showbook->show();
    MainWindow::~MainWindow();
}

void MainWindow::on_pushButton_2_clicked()
{
    Condition *showcondition = new Condition();
    showcondition->show();
    MainWindow::~MainWindow();
}

void MainWindow::on_pushButton_3_clicked()
{
    Bus *showbus = new Bus();
    showbus->show();
    MainWindow::~MainWindow();
}
