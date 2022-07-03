#ifndef BOOK_H
#define BOOK_H

#include <QWidget>

namespace Ui {
class Book;
}

class Book : public QWidget
{
    Q_OBJECT

public:
    explicit Book(QWidget *parent = nullptr);
    ~Book();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Book *ui;
};

#endif // BOOK_H
