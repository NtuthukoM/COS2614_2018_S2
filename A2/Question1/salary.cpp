#include "salary.h"

Salary::Salary(double sal)
{
    type = "Salary";
    salary = sal;
}

double Salary::pay()
{
    return salary;
}
