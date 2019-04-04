#include <iostream>

#include "Employee.h"
#include "ProductionWorker.h"

int main() {
    std::string name, date;
    int shift, number;
    double pay;

    std::cout << "\tPlease Enter Employee Information" << std::endl;
    std::cout << "Enter Employee Name: ";
    std::cin.ignore();
    getline(std::cin, name);
    std::cout << "Enter Employee Number: ";
    std::cin >> number;
    std::cout << "Enter Hire Date: ";
    std::cin.ignore();
    getline(std::cin, date);

    std::cout << "Enter Length of Shift: ";
    std::cin >> shift;
    std::cout << "Enter Hourly Pay: $";
    std::cin >> pay;

    ProductionWorker employee1;

    try {
        employee1.setEmployeeName(name);
        employee1.setEmployeeNumber(number);
        employee1.setHireDate(date);
        employee1.setShift(shift);
        employee1.setHourlyPayRate(pay);

        std::cout << "\n\tEmployee Information" << std::endl;
        std::cout << "Employee Name: " << employee1.getEmployeeName() << std::endl;
        std::cout << "Employee Number: " << employee1.getEmployeeNumber() << std::endl;
        std::cout << "Hire Date: " << employee1.getHireDate() << std::endl;

        std::cout << "Length of Shift: " << employee1.getShift() << std::endl;
        std::cout << "Hourly Pay: $" << employee1.getHourlyPayRate() << std::endl;
    } catch (Employee::Invalid) {
        std::cout << "Error: An invalid value was given " << std::endl;
    }

    return 0;
}