//
// Matthew Sleight
// Februaru 16, 2025
// Employee Class Programming Project
// COSC 2030
//

// Specification file for the Employee class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee {
    private:
        string name;        // The employee's name
        int idNumber;       // ID number
        string department;  // Department name
        string position;    // Job title

    public:
        // Constructors
        Employee(string, int, string, string);
        Employee(string, int);
        Employee();

        // Mutators
        void setName(string);
        void setIdNumber(int);
        void setDepartment(string);
        void setPosition(string);

        // Accessors
        string getName() const;
        int getIdNumber() const;
        string getDepartment() const;
        string getPosition() const;
};

#endif