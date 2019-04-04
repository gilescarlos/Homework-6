//
// Created by Giles Pierre Carlos on 2019-04-01.
//

#ifndef EXCEPTIONPROJECT_EMPLOYEE_H
#define EXCEPTIONPROJECT_EMPLOYEE_H
#include <iostream>

class Employee {
private:
    std::string employeeName;
    int employeeNumber;
    std::string hireDate;
public:
    class Invalid
        { };
    Employee();
    Employee(std::string, int, std::string);

    void setEmployeeName(std::string);
    void setEmployeeNumber(int);
    void setHireDate(std::string);

    std::string getEmployeeName();
    int getEmployeeNumber();
    std::string getHireDate();
};


#endif //EXCEPTIONPROJECT_EMPLOYEE_H
