#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <QObject>
#include <QString>
#include <QDate>
#include <QStringList>

class Example : public QObject
{
    Q_OBJECT
public:
    explicit Example(QObject *parent = 0);

    QString name() const;
    void setName(const QString &name);

    QString adress() const;
    void setAdress(const QString &adress);

    QDate birthday() const;
    void setBirthday(const QDate &birthday);

    QStringList phonenumber() const;
    void setPhonenumber(const QStringList &phonenumber);

signals:

public slots:

private:

    QString m_name;
    QString m_adress;
    QDate m_birthday;
    QStringList m_phonenumber;
};

#endif // EXAMPLE_H
