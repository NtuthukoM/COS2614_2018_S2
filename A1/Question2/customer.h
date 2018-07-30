#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <QString>
#include <QStringList>


class Customer
{
private:
    QString m_Name;
    QString m_CellNum;
    QStringList m_Address;

public:
    Customer();
    Customer(QString name, QString cell, QStringList addr);
    QString toString(bool labeled);

};

#endif // CUSTOMER_H
