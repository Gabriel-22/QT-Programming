#include "example.h"

Example::Example(QObject *parent) : QObject(parent)
{

}
QString Example::name() const
{
    return m_name;
}

void Example::setName(const QString &name)
{
    m_name = name;
}
QString Example::adress() const
{
    return m_adress;
}

void Example::setAdress(const QString &adress)
{
    m_adress = adress;
}
QDate Example::birthday() const
{
    return m_birthday;
}

void Example::setBirthday(const QDate &birthday)
{
    m_birthday = birthday;
}
QStringList Example::phonenumber() const
{
    return m_phonenumber;
}

void Example::setPhonenumber(const QStringList &phonenumber)
{
    m_phonenumber = phonenumber;
}





