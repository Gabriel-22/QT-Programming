#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <Qtcore>
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->progressBar->setValue(ui->horizontalSlider->value());

    Statlabel = new QLabel(this);
    StatProgress = new QProgressBar(this);

    ui->statusBar->addPermanentWidget(Statlabel);
    ui->statusBar->addPermanentWidget(StatProgress);

    Statlabel->setText("Hello");
    StatProgress->setValue(90);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    QMessageBox::information(this,"title","Hello");
}

void MainWindow::on_actionOpen_triggered()
{
    QMessageBox::information(this,"title","Open");
}

void MainWindow::on_actionDo_Something_triggered()
{
    ui->statusBar->showMessage("Hi",2000);
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::warning(this,"this is a warning","look out");
}
