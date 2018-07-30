#include "commission.h"


Commission::~Commission()
{

}

Commission::Commission(double cr):Payment("Commission")
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
