#ifndef CONDITION_H
#define CONDITION_H

#include <QWidget>

namespace Ui {
class Condition;
}

class Condition : public QWidget
{
    Q_OBJECT

public:
    explicit Condition(QWidget *parent = nullptr);
    ~Condition();

private slots:
    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

private:
    Ui::Condition *ui;
};

#endif // CONDITION_H
