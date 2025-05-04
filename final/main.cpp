//
// Matthew Sleight
// May 4, 2025
// Final Project
// COSC 2030
//

// Compiling Notes
//
// g++ main.cpp Salesperson.cpp -o output

#include "Salesperson.h"
#include <iostream>

using namespace std;

int main() {
    double sales;
    double advance;

    // Ask user for sales amount
    cout << "Enter the salesperson's monthly sales: ";
    cin >> sales;

    // Ask user for advance pay amount
    cout << "Enter the amount of advanced pay for this salesperson: ";
    cin >> advance;

    // Create Salesperson object with user input
    Salesperson sp(sales, advance);

    // Calculate commission and final pay
    sp.calculatePay();

    // Show the results
    sp.displayResults();
    
    return 0;
}