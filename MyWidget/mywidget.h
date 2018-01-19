#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QMainWindow>
#include <QString>
#include <QDebug>

namespace Ui {
class MyWidget;
}

class MyWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

    void write(QString fileName);

    void read(QString fileName);

private slots:
    void on_actionAbout_triggered();

    void on_okButton_clicked();

private:
    Ui::MyWidget *ui;
};

#endif // MYWIDGET_H
