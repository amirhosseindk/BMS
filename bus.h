#ifndef BUS_H
#define BUS_H

#include <QWidget>

namespace Ui {
class Bus;
}

class Bus : public QWidget
{
    Q_OBJECT

public:
    explicit Bus(QWidget *parent = nullptr);
    ~Bus();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Bus *ui;
};

#endif // BUS_H
