#include <QApplication>
#include <igra.h>
#include <menu.h>
#include <cstdlib>
#include <ctime>

menu *meni;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    srand(time(NULL));

    meni = new menu;
    meni->show();

    return a.exec();
}
