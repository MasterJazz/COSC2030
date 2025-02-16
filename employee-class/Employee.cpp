//
// Matthew Sleight
// Februaru 16, 2025
// Employee Class Programming Project
// COSC 2030
//

// Implementation file for the Employee class
#include "Employee.h"

// This constructor accepts arguments for the employee's
// name, ID number, department, and position.
Employee::Employee(string n, int id, string dept, string pos) {
    name = n;
    idNumber = id;
    department = dept;
    position = pos;
}

// This constructor accepts arguments for the employee's
// name and ID number. The department and position
// member variables are assigned empty strings
Employee::Employee(string n, int id) {
    name = n;
    idNumber = id;
    department = "";
    position = "";
}

// The default constructor assigns empty strings to
// the name, department, and position member variables.
// The idNumber member variable is assigned 0.
Employee::Employee() {
    name = "";
    idNumber = 0;
    department = "";
    position = "";
}

// Mutator function for the name.
void Employee::setName(string n) {
    name = n;
}

// Mutator function for the ID number.
void Employee::setIdNumber(int id) {
    idNumber = id;
}

// Mutator function for the department.
void Employee::setDepartment(string dept) {
    department = dept;
}

// Mutator function for the position.
void Employee::setPosition(string pos) {
    position = pos;
}

// Accessor function for the name.
string Employee::getName() const {
    return name;
}

// Accessor function for the ID number.
int Employee::getIdNumber() const {
    return idNumber;
}

// Accessor function for the department.
string Employee::getDepartment() const {
    return department;
}

// Accessor function for the position.
string Employee::getPosition() const {
    return position;
}