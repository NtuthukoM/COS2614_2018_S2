#include "loyaltycard.h"

LoyaltyCard::LoyaltyCard()
{

}

void LoyaltyCard::setDetails(int CardNum, QString custName, QString cellNum, QStringList custAddress)
{
    m_CardNum = CardNum;
    m_Points = 0;
    m_Customer = Customer(custName,cellNum, custAddress);
}

void LoyaltyCard::addPoints(int points)
{
    m_Points += points;
}

int LoyaltyCard::getPonits()
{
    return (int)m_Points;
}

void LoyaltyCard::purchase(double value)
{
    addPoints((int)round(value));
}

double LoyaltyCard::currentValue()
{
    //The value of the points in rands is 4% of the number in m_Points.
    return m_Points * 0.04;
}

QString LoyaltyCard::toString(bool labeled)
{
    int points = getPonits();
    double randValue = currentValue();
    if(labeled){
        return QString("%1\n\t\t *** Card Details ***\nCard Number:%2\nLoyalty Points:%3\nRand Value:%4")
                .arg(m_Customer.toString(labeled))
                .arg(m_CardNum).arg(QString::number(points))
                .arg(QString::number(randValue));
    }else{
        return QString("%1\n\t\t *** Card Details ***\n%2\n%3\n%4")
                .arg(m_Customer.toString(labeled))
                .arg(m_CardNum).arg(QString::number(points))
                .arg(QString::number(randValue));
    }

}
