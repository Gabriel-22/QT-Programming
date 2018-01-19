#include "mywidget.h"
#include "ui_mywidget.h"
#include "about.h"
#include <QString>
#include <QFile>

MyWidget::MyWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    ui->closeButton->setText("Close");

}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::write(QString fileName)
{
    QFile mFile(fileName);


}

void MyWidget::read(QString fileName)
{

}

void MyWidget::on_actionAbout_triggered()
{
    About aboutObject;
    aboutObject.setModal(true);
    aboutObject.exec();
}

void MyWidget::on_okButton_clicked()
{

}
