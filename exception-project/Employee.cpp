//
// Matthew Sleight
// March 16, 2025
// Exception Project Programming Project
// COSC 2030
//

#include "Employee.h"
#include <iostream>

using namespace std;

// Constructor
Employee::Employee(string name, int number, string hDate) {
    employeeName = name;
    employeeNumber = number;
    hireDate = hDate;

    // Check the employee number
    checkEmployeeNumber();
}

// Mutator
void Employee::setEmployeeName(string name) { employeeName = name; }

void Employee::setEmployeeNumber(int number) {
    employeeNumber = number;
    checkEmployeeNumber();
}

void Employee::setHireDate(string hDate) { hireDate = hDate; }

// Accessor
string Employee::getEmployeeName() const { return employeeName; }
int Employee::getEmployeeNumber() const { return employeeNumber; }
string Employee::getHireDate() const { return hireDate; }

// Validation function
void Employee::checkEmployeeNumber() {
    if (employeeNumber < 0 || employeeNumber > 9999)
        throw InvalidEmployeeNumber();
}