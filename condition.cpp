#include "condition.h"
#include "ui_condition.h"
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "clss.h"
#include "QFile"
#include "QTextStream"
#include "mainwindow.h"
Condition::Condition(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Condition)
{
    ui->setupUi(this);
    QPixmap pic("C:/Users/qmirhossein/Desktop/available.png");

    ui->label_1->setPixmap(pic);
    ui->label_2->setPixmap(pic);
    ui->label_3->setPixmap(pic);
    ui->label_4->setPixmap(pic);
    ui->label_5->setPixmap(pic);
    ui->label_6->setPixmap(pic);
    ui->label_7->setPixmap(pic);
    ui->label_8->setPixmap(pic);
    ui->label_9->setPixmap(pic);
    ui->label_10->setPixmap(pic);
    ui->label_11->setPixmap(pic);
    ui->label_12->setPixmap(pic);
    ui->label_13->setPixmap(pic);
    ui->label_14->setPixmap(pic);
    ui->label_15->setPixmap(pic);
    ui->label_16->setPixmap(pic);
    ui->label_17->setPixmap(pic);
    ui->label_18->setPixmap(pic);
    ui->label_19->setPixmap(pic);
    ui->label_20->setPixmap(pic);
    ui->label_21->setPixmap(pic);
    ui->label_22->setPixmap(pic);
    ui->label_23->setPixmap(pic);
    ui->label_24->setPixmap(pic);
    ui->label_25->setPixmap(pic);
    ui->label_26->setPixmap(pic);
    ui->label_27->setPixmap(pic);
    ui->label_28->setPixmap(pic);
    ui->label_29->setPixmap(pic);
    ui->label_30->setPixmap(pic);
    ui->label_31->setPixmap(pic);
    ui->label_32->setPixmap(pic);

    QFile inputFile("e:/businfo.txt");
    if (inputFile.open(QIODevice::ReadOnly))
    {
      QTextStream in(&inputFile);
      while (!in.atEnd())
      {
         QString line = in.readLine();
        ui->comboBox->addItem (line);
      }
      inputFile.close();
    }
}

Condition::~Condition()
{
    delete ui;
}



void Condition::on_pushButton_clicked()
{
    /*     QSqlQuery  q;
           if(!q.exec("SELECT * FROM bus='"+busn+"' WHERE seat=''"))
           {
                QPixmap pic("C:/Users/qmirhossein/Desktop/notavailable.png");
                ui->label_1->setPixmap(pic);
           }
     */
    book b;
    if(ui->comboBox->itemText(0)=="1")
    {
        QPixmap pic("C:/Users/qmirhossein/Desktop/notavailable.png");
        ui->label_1->setPixmap(pic);
    }
}

void Condition::on_pushButton_2_clicked()
{
    MainWindow *showMainWindow = new MainWindow();
    showMainWindow->show();
    Condition::~Condition();
}
