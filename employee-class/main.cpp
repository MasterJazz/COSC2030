//
// Matthew Sleight
// Februaru 16, 2025
// Employee Class Programming Project
// COSC 2030
//

// Compiling Notes
//
// g++ main.cpp Employee.cpp -o output

#include <iostream>
#include "Employee.h"

using namespace std;

// Function prototype
void displayEmployee(Employee);

int main() {
    // Create three Employee objects
    Employee susan("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee mark("Mark Jones", 39119);
    Employee joy;

    // Display each employee's data
    cout << "Here is each employee's data:\n";
    displayEmployee(susan);
    displayEmployee(mark);
    displayEmployee(joy);

    // Using the mutator functions to update the mark
    // and joy objects
    mark.setDepartment("IT");
    mark.setPosition("Programmer");

    joy.setName("Joy Rogers");
    joy.setIdNumber(81774);
    joy.setDepartment("Manufacturing");
    joy.setPosition("Engineer");

    // Display each employee's data again
    cout << "\nEmployee data after updating:\n";
    displayEmployee(susan);
    displayEmployee(mark);
    displayEmployee(joy);

    return 0;
}

// The displayEmployee function displays an Employee
// object's data
void displayEmployee(Employee e) {
    cout << "----------------------------------------\n";
    cout << "Name: " << e.getName() << endl;
    cout << "ID Number: " << e.getIdNumber() << endl;
    cout << "Department: " << e.getDepartment() << endl;
    cout << "Position: " << e.getPosition() << endl;
}