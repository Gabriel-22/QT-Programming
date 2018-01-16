#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QMainWindow>

namespace Ui {
class MyWidget;
}

class MyWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

private slots:
    void on_actionAbout_triggered();

private:
    Ui::MyWidget *ui;
};

#endif // MYWIDGET_H
