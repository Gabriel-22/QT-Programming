// most basic and important library in qt
#include <QApplication>

#include <QLabel>

int main(int argc, char *argv[]){
    //define object of QApplication
    QApplication app(argc, argv);
    QLabel *label = new QLabel("hello world");
    label->show();
    return app.exec();
}
