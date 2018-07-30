#ifndef LOYALTYCARD_H
#define LOYALTYCARD_H
#include <QString>
#include <QStringList>
#include "customer.h"


class LoyaltyCard
{
private:
Customer m_Customer;
double m_Points;
int m_CardNum;

public:
    LoyaltyCard();
    void setDetails(int CardNum, QString custName, QString cellNum, QStringList custAddress);
    void addPoints(int points);
    int getPonits();
    void purchase(double value);
    double currentValue();
    QString toString(bool labeled);
};

#endif // LOYALTYCARD_H
