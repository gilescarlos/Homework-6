//
// Created by Giles Pierre Carlos on 2019-04-01.
//

#ifndef EXCEPTIONPROJECT_PRODUCTIONWORKER_H
#define EXCEPTIONPROJECT_PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee {
    int shift;
    double hourlyPayRate;
public:
    ProductionWorker() {
        setEmployeeName(" ");
        setEmployeeNumber(0);
        setHireDate(" ");
        setShift(0);
        setHourlyPayRate(0);
    }

    ProductionWorker(int st, double rate, std::string name, int number, std::string  date) : Employee(name, number, date) {
        setShift(st);
        setHourlyPayRate(rate);
    }

    void setShift(int);
    void setHourlyPayRate(double);

    int getShift();
    double getHourlyPayRate();
};



#endif //EXCEPTIONPROJECT_PRODUCTIONWORKER_H
