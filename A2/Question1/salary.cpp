#include "salary.h"

Salary::~Salary()
{

}

Salary::Salary(double sal):Payment("Salary")
{
    salary = sal;
}

double Salary::pay()
{
    return salary;
}
