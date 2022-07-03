#include "bus.h"
#include "ui_bus.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include "QMessageBox"
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include "clss.h"
#include "mainwindow.h"
Bus::Bus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Bus)
{
    ui->setupUi(this);
}

Bus::~Bus()
{
    delete ui;
}

void writefile(QString busnumber)
{
      QFile myfile("e:/businfo.txt");
      if(!myfile.open(QFile::WriteOnly|QFile::Text|QFile::Append))
      {
          QMessageBox msg1;
          msg1.setText("could not open file");
          msg1.show();
      }
      QTextStream out(&myfile);
      out << busnumber << endl;
      myfile.flush();
      myfile.close();
}

void db(QString busnumber,QString name,QString origin,QString destin,QString time1,QString time2,QString date)
{
    QSqlQuery  q;
    q.exec("CREATE TABLE bus (busnumber TEXT PRIMARY KEY, name TEXT , origin TEXT , destin TEXT , time1 TEXT , time2 TEXT , date TEXT)");
    q.exec("INSERT INTO bus(busnumber,name,origin,destin,time1,time2,date)  VALUES ('"+busnumber+"','"+name+"','"+origin+"','"+destin+"','"+time1+"','"+time2+"','"+date+"')");
    q.exec("CREATE TABLE buy (busnumber TEXT PRIMARY KEY, seat TEXT , name TEXT)");
}

void Bus::on_pushButton_clicked()
{
    book b;
    const int a = ui->spinBox->value();
    b.busnumber[a] = ui->spinBox->text();
    b.time1[a] = ui->timeEdit->text();
    b.time2[a] = ui->timeEdit_2->text();
    b.date[a] = ui->dateEdit->text();
    b.name[a] = ui->lineEdit->text();
    b.origin[a] = ui->lineEdit_2->text();
    b.destin[a] = ui->lineEdit_3->text();
    writefile(b.busnumber[a]);
    db(b.busnumber[a],b.name[a],b.origin[a],b.destin[a],b.time1[a],b.time2[a],b.date[a]);
    QMessageBox::information(this,"موفقیت","اتوبوس با موفقیت ایجاد شد");
}

void Bus::on_pushButton_2_clicked()
{
    MainWindow *showMainWindow = new MainWindow();
    showMainWindow->show();
    Bus::~Bus();
}
