#include "mywidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();

    QString mfilename = "C:\Users\Luis\Documents\QT-Programming\MyWidget";

    write(mfilename);
    read(mfilename);

    return a.exec();
}
