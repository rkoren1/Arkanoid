#ifndef LEVELS_H
#define LEVELS_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class Levels;
}

class Levels : public QWidget
{
    Q_OBJECT

public:
    explicit Levels(QWidget *parent = 0);
    ~Levels();
    QPushButton *a;

private slots:
    void on_nazaj_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();
public slots:
    void abc();

private:
    Ui::Levels *ui;
};

#endif // LEVELS_H
