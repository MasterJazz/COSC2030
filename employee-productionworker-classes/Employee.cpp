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

// Validation function for employee number format
bool Employee::isValidEmpNum(string e) const {
    // Check if the string is too short to be valid
    if (e.length() < 3) {
        return false;
    }

    // Find the position of the hyphen
    size_t dashPos = e.find('-');

    // Check if the hyphen exists and is not at the start or end
    if (dashPos == string::npos || dashPos == 0 || dashPos == e.length() - 1) {
        return false;
    }

    // Check that everything before the hyphen is a digit
    for (size_t i = 0; i < dashPos; i++) {
        if (!isdigit(e[i])) {
            return false;
        }
    }

    // Check that the last part after the hyphen is a single letter
    if (dashPos + 1 == e.length() - 1 && isalpha(e[dashPos + 1])) {
        return true;
    }

    return false;
}

// Convert to string
string Employee::toString() const {
    return "\nName: " + name + "\nEmployee Number: " + employeeNumber
            + "\nHire Date: " + hireDate;
}

// Display function
void Employee::display() const {
    cout << toString() << endl;
}