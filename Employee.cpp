//
// Created by Giles Pierre Carlos on 2019-04-01.
//

#include "Employee.h"

Employee::Employee() {
    setEmployeeName(" ");
    setEmployeeNumber(0);
    setHireDate(" ");
}
Employee::Employee(std::string name, int number, std::string date) {
    setEmployeeName(name);
    setEmployeeNumber(number);
    setHireDate(date);
}

void Employee::setEmployeeName(std::string name) { employeeName = name; }
void Employee::setEmployeeNumber(int number) {
    if (number >= 0 && number < 1000)
        employeeNumber = number;
    else
        throw Invalid();
}
void Employee::setHireDate(std::string date) { hireDate = date; }

std::string Employee::getEmployeeName() { return employeeName; }
int Employee::getEmployeeNumber() { return employeeNumber; }
std::string Employee::getHireDate() { return hireDate; }
