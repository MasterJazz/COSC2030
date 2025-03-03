//
// Matthew Sleight
// March 2, 2025
// Employee and ProductionWorker Classes Programming Project
// COSC 2030
//

#include "Employee.h"
#include <iostream>

using namespace std;

// Constructor
Employee::Employee(string n, string num, string date) {
    name = n;
    employeeNumber = num;
    hireDate = date;
}

// Setters
void Employee::setName(string n) { name = n; }
void Employee::setEmployeeNumber(string num) { employeeNumber = num; }
void Employee::setHireDate(string date) { hireDate = date; }

// Getters
string Employee::getName() const { return name; }
string Employee::getEmployeeNumber() const { return employeeNumber; }
string Employee::getHireDate() const { return hireDate; }

// Display function
void Employee::display() const {
    cout << "\nName: " << name << "\n"
         << "Employee Number: " << employeeNumber << "\n"
         << "Hire Date: " << hireDate << "\n";
}