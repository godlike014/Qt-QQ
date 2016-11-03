#include "drawer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Drawer drawer;
    drawer.resize(250,600);
    drawer.show();

    return a.exec();
}
