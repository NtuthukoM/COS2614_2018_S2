#include "customer.h"
#include <QString>
#include <QStringList>

Customer::Customer()
{

}

Customer::Customer(QString name, QString cell, QStringList addr)
{
    m_Name = name;
    m_CellNum = cell;
    m_Address = addr;
}

QString Customer::toString(bool labeled)
{
    if(labeled){
        return QString("\t\t *** Customer Details *** \nName:%1\nCell Number:%2\nAddress:%3\n")
                .arg(m_Name).arg(m_CellNum)
                .arg(m_Address.join("\n"));
    }else{
        return QString("\t\t *** Customer Details *** \n%1\n%2\n%3\n")
                .arg(m_Name).arg(m_CellNum)
                .arg(m_Address.join("\n"));
    }

}
