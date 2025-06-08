#include "Splash.h"
#include  "Menu.h"
#include "Board.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    splash w;
    w.show();
    return a.exec();
}
