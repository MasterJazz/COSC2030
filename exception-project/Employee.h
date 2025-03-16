//
// Matthew Sleight
// March 16, 2025
// Exception Project Programming Project
// COSC 2030
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
    private:
        string employeeName;
        int employeeNumber;
        string hireDate;
    
        // Member function to validate the employee number
        void checkEmployeeNumber();

    public:
        // Exception class
        class InvalidEmployeeNumber {};

        // Constructor
        Employee(string name, int number, string hDate);

        // Mutators (setters)
        void setEmployeeName(string name);
        void setEmployeeNumber(int number);
        void setHireDate(string hDate);

        // Accessors (getters)
        string getEmployeeName() const;
        int getEmployeeNumber() const;
        string getHireDate() const;
};

#endif