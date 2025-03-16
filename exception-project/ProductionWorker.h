//
// Matthew Sleight
// March 16, 2025
// Exception Project Programming Project
// COSC 2030
//

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

using namespace std;

class ProductionWorker : public Employee {
    private:
        int shift;
        double hourlyPayRate;

        // Validation functions
        void checkShift();
        void checkPayRate();

    public:
        // Exception classes
        class InvalidShift {};
        class InvalidPayRate {};

        // Constructor
        ProductionWorker(string name, int number, string hDate, int shiftNum, double payRate);

        // Mutators (setters)
        void setShift(int shiftNum);
        void setHourlyPayRate(double payRate);

        // Accessors (getters)
        int getShift() const;
        double getHourlyPayRate();
};

#endif