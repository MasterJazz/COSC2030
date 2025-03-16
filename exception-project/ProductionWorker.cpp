//
// Matthew Sleight
// March 16, 2025
// Exception Project Programming Project
// COSC 2030
//

#include "ProductionWorker.h"
#include <iostream>

// Constructor
ProductionWorker::ProductionWorker(string name, int number, string hDate,
                int shiftNum, double payRate) : Employee(name, number, hDate) {
    shift = shiftNum;
    hourlyPayRate = payRate;

    // Check the shift and payRate
    checkShift();
    checkPayRate();
}

// Mutator
void ProductionWorker::setShift(int shiftNum) {
    shift = shiftNum;
    checkShift();
}

void ProductionWorker::setHourlyPayRate(double payRate) {
    hourlyPayRate = payRate;
    checkPayRate();
}

// Accessor
int ProductionWorker::getShift() const { return shift; }
double ProductionWorker::getHourlyPayRate() { return hourlyPayRate; }

// Validation function
void ProductionWorker::checkShift() {
    if (shift < 1 || shift > 2)
        throw InvalidShift();
}

void ProductionWorker::checkPayRate() {
    if (hourlyPayRate < 0)
        throw InvalidPayRate();
}