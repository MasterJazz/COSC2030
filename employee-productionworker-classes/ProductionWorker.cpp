//
// Matthew Sleight
// March 2, 2025
// Employee and ProductionWorker Classes Programming Project
// COSC 2030
//

#include "ProductionWorker.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Constructor
ProductionWorker::ProductionWorker(string n, string num, string date,
                                int sh, double rate) : Employee(n, num, date) {
    shift = sh;
    payRate = rate;            
}

// Setters
void ProductionWorker::setShift(int sh) { shift = sh; }
void ProductionWorker::setPayRate(double rate) { payRate = rate; }

// Getters
int ProductionWorker::getShift() const { return shift; }
double ProductionWorker::getPayRate() const { return payRate; }

// Convert to string
string ProductionWorker::toString() const {
    return Employee::toString() + "\nShift: " + (shift == DAY_SHIFT ? "Day" : "Night") +
            "\nPay Rate: $" + to_string(((int)payRate * 100) / 100.0);  
            // Truncate extra decimal places
}

// Display function
void ProductionWorker::display() const {
    Employee::display();

    // Format to 2 decimal places
    cout << fixed << setprecision(2);

    cout << "Shift: " << (shift == DAY_SHIFT ? "Day" : "Night") << "\n"
         << "Pay Rate: $" << payRate << "\n";
}