#ifndef MENU_H
#define MENU_H

#include <QWidget>

namespace Ui {
class menu;
}

class menu : public QWidget
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = 0);
    //void mouseMoveEvent(QMouseEvent *e);
    ~menu();

private slots:

    void on_start_clicked();

    void on_izhod_clicked();

private:
    Ui::menu *ui;
};

#endif // MENU_H
