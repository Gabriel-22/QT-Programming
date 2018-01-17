#include "mywidget.h"
#include "ui_mywidget.h"
#include "about.h"

MyWidget::MyWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    ui->pushButton->setText("Close");

}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_actionAbout_triggered()
{
    About mAbout;
    mAbout.setModal(true);
    mAbout.exec();
}
