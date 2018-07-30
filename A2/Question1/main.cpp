#include <QCoreApplication>
#include <QTextStream>
#include "employee.h"
#include "employeelist.h"
#include "commission.h"
#include "hourly.h"
#include "payment.h"
#include "salary.h"
#include <QString>


QTextStream cin(stdin);
QTextStream cout(stdout);

int main(int argc, char *argv[])
{
    cout << "\t\t ** Employee List test ***"
         << endl;

    /*
        Add at least six employees (including at least two of each of the concrete subclasses of
        Payment) to an EmployeeList.
    */
    cout << "-Adding Employees..."
         << endl;
    EmployeeList employees;
    Employee sally("Sally","Happy");
    Salary* salEmp01 = new Salary(25000);
    sally.setPayment(salEmp01);

    Employee wendy("Wendy","Zulu");
    Salary* salEmp02 = new Salary(5000);
    wendy.setPayment(salEmp02);

    employees.append(sally);
    employees.append(wendy);

    Employee grant("Grant", "Cardone");
    Commission* comEmp01 = new Commission(20000);
    comEmp01->addSales(230000);
    grant.setPayment(comEmp01);

    Employee nonhle("Nonhle","Cele");
    Commission* comEmp02 = new Commission(4000);
    comEmp02->addSales(15);
    nonhle.setPayment(comEmp02);

    employees.append(grant);
    employees.append(nonhle);

    Employee henry("Henry", "Green");
    Hourly* hrEmp01 = new Hourly(150) ;
    henry.setPayment(hrEmp01);

    Employee steve("Steve", "Balmer");
    Hourly* hrEmp02 = new Hourly(500);
    steve.setPayment(hrEmp02);

    employees.append(henry);
    employees.append(steve);

    /*
        Call the addHours() member function on the Hourly payment of at least one instance of
        an hourly paid employee that has been stored in the list.
    */
    cout << "-Adding hours..."
         << endl;
    hrEmp01->addHours(45);
    hrEmp02->addHours(45);

    /*
        Call the addSales() member functions on the Commission payment of at least one
        instance of a commission paid employee in the list.
    */
    cout << "-Adding sales..."
         << endl;
    comEmp01->addSales(2400);

    /*
        Display a report of the payments owed to each employee at the end of the month, grouped
        into salaried, hourly paid and commission paid employees.
    */
    cout << "ID: " + QString::number(employees.size())
         << endl;
    cout << "\n\n\t\t ** Employee Report ***\n"
         << endl;
    QString strType = "";
    foreach(Employee emp, employees) {
        Payment* payment = emp.getPayment();
        QString strPay = payment->getType();

        if(strType != strPay){
            strType = strPay;
            cout << QString("\n\t\t ** %1 ***\n").arg(strType)
                 << endl;
        }
        cout << "ID: " + QString::number(emp.getID())
             << endl;
        cout << "Name: " + emp.getName()
             << endl;

        cout << "Payment: R" + QString::number(emp.getPayment()->pay())
             << endl;

        cout << "\t\t-----------------------------------------------------"
             << endl;
    }

    return 0;
}
