//
// Matthew Sleight
// May 4, 2025
// Final Project
// COSC 2030
//

#include "Salesperson.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Constructor sets sales and advance, initializes other values
Salesperson::Salesperson(double salesAmount, double advanceAmount)
            : sales(salesAmount), advance(advanceAmount), rate(0.0),
            commission(0.0), pay(0.0) {
    // Determine the commission rate when created
    calculateCommissionRate();
}

// Determine the comission rate
void Salesperson::calculateCommissionRate() {
    if (sales < 10000)
        rate = 0.05;
    else if (sales < 15000)
        rate = 0.10;
    else if (sales < 18000)
        rate = 0.12;
    else if (sales < 22000)
        rate = 0.14;
    else
        rate = 0.16;
}

// Calculates the commission and final pay
void Salesperson::calculatePay() {
    // Calculate the sales comission
    commission = sales * rate;

    // Calculate the salesperson's pay
    pay = commission - advance;
}

// Display the results
void Salesperson::displayResults() const {
    cout << fixed << showpoint << setprecision(2);
    cout << "\nPay Results\n";
    cout << "---------------\n";
    cout << "Sales: $" << sales << endl;
    cout << "Commission Rate: " << rate << endl;
    cout << "Commission: $" << commission << endl;
    cout << "Advanced Pay: $" << advance << endl;
    cout << "Remaining Pay: $" << pay << endl;
}