#ifndef EMPLOYEELIST_H
#define EMPLOYEELIST_H
#include "employee.h"
#include <QList>


class EmployeeList: public QList<Employee>
{
public:
    EmployeeList();
};

#endif // EMPLOYEELIST_H
