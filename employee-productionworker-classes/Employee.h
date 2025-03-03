//
// Matthew Sleight
// March 2, 2025
// Employee and ProductionWorker Classes Programming Project
// COSC 2030
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
    private:
        string name;
        string employeeNumber;
        string hireDate;

    public:
        // Constructors
        Employee(string n = "", string num = "", string date = "");

        // Mutators (setters)
        void setName(string n);
        void setEmployeeNumber(string num);
        void setHireDate(string date);

        // Accessors (getters)
        string getName() const;
        string getEmployeeNumber() const;
        string getHireDate() const;

        // Validation function
        bool isValidEmpNum(string e) const;

        // Convert object to string
        string toString() const;

        // Display function
        void display() const;
};

#endif