//
// Matthew Sleight
// March 2, 2025
// Employee and ProductionWorker Classes Programming Project
// COSC 2030
//

#include "ProductionWorker.h"
#include <iostream>

using namespace std;

// Constructor
ProductionWorker::ProductionWorker(string n, string num, string date,
                                int sh, double rate) : Employee(n, num, date) {
    shift = sh;
    payRate = rate;            
}

// Setters
void ProductionWorker::setShift(int sh) {
    if (sh == DAY_SHIFT || sh == NIGHT_SHIFT) {
        shift = sh;
    } else {
        cout << "Invalid shift. Use 1 for Day or 2 for night.\n";
    }
}

void ProductionWorker::setPayRate(double rate) {
    if (rate >= 0) {
        payRate = rate;
    } else {
        cout << "Invalid pay rate. It can't be negative.\n";
    }
}

// Getters
int ProductionWorker::getShift() const { return shift; }
double ProductionWorker::getPayRate() const { return payRate; }

// Display function
void ProductionWorker::display() const {
    Employee::display();
    cout << "Shift: " << (shift == DAY_SHIFT ? "Day" : "Night") << "\n"
         << "Pay Rate: $" << payRate << "\n";
}