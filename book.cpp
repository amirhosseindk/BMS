#include "book.h"
#include "ui_book.h"
#include <QString>
#include <QTextStream>
#include "QMessageBox"
#include <QFactoryInterface>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include "clss.h"
#include "mainwindow.h"
Book::Book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Book)
{
    ui->setupUi(this);
}

Book::~Book()
{
    delete ui;
}

void db(QString busn,QString name,QString seat)
{
    QSqlQuery  q;
    q.exec("INSERT INTO buy(busnumber,seat,name)  VALUES ('"+busn+"','"+seat+"','"+name+"')");
}


void Book::on_pushButton_clicked()
{
    book b;
    const int c = ui->spinBox_2->value();
    b.busnumber[c] = ui->spinBox_2->text();
    b.pname[c] = ui->lineEdit->text();
    b.Qseat[c] = ui->spinBox->text();
    db(b.busnumber[c],b.pname[c],b.Qseat[c]);
    QMessageBox::information(this,"موفقیت","بلیط با موفقیت خریداری شد");
}


void Book::on_pushButton_2_clicked()
{
    MainWindow *showMainWindow = new MainWindow();
    showMainWindow->show();
    Book::~Book();
}
