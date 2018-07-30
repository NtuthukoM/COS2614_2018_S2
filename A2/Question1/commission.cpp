#include "commission.h"


Commission::Commission(double cr)
{
    commissionRate = cr;
}

void Commission::addSales(double sv)
{
    totalSales += sv;
}

double Commission::pay()
{
    return totalSales * commissionRate;
}
