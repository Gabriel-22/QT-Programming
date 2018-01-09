#include <QApplication>
#include <QtCore>
#include <QDebug>
#include "test.h"
#include <iostream>

using namespace std;

class Box{
public:
    double lenght;
    double width;
    double height;
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Box box1; // Declare box1 of type Box
    Box box2; // Declare box2 of type Box
    double volume = 0.0; // Store the volume of a box here

    // box 1 specification
    box1.height = 5.0;
    box1.lenght = 6.0;
    box1.width = 7.0;

    // box 2 specification
    box2.height = 10.0;
    box2.lenght = 12.0;
    box2.width = 13.0;

    // volume of box 1
    volume = box1.height * box1.lenght * box1.width;
    cout << "volume of box 1: " << volume << endl;

    // volume of box 2
    volume = box2.height * box2.lenght * box2.width;
    cout << "volume of box 2: " << volume << endl;

    return app.exec();
}
