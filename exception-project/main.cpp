//
// Matthew Sleight
// March 16, 2025
// Exception Project Programming Project
// COSC 2030
//

// Compile Notes
//
// g++ main.cpp Employee.cpp ProductionWorker.cpp -o output

#include "ProductionWorker.h"
#include <iostream>
#include <string>

using namespace std;

// Function prototype
void testValues(string, int, string, int, double);

int main() {
    // Test all good data
    cout << "Testing good data...\n";
    testValues("John Doe", 1234, "12/01/2009", 1, 22.50);

    // Test a bad employee number
    cout << "\nTesting a bad employee number...\n";
    testValues("John Doe", -99, "12/01/2009", 1, 22.55);

    // Test a bad shift number
    cout << "\nTesting a bad shift number...\n";
    testValues("John Doe", 1234, "12/01/2009", 5, 22.50);

    // Test a bad pay rate
    cout << "\nTesting a bad pay rate...\n";
    testValues("John Doe", 1234, "12/01/2009", 1, -100.0);

    return 0;
}

void testValues (string name, int number, string hDate, int shift, double payRate) {
    // Test the InvalidEmployeeNumber exception
    try {
        // Create a Production worker with an invalid number
        ProductionWorker(name, number, hDate, shift, payRate);

        // Report good data
        cout << "Good data\n";
    }
    catch (ProductionWorker::InvalidEmployeeNumber) {
        cout << "Invalid employee number encountered.\n";
    }
    catch (ProductionWorker::InvalidShift) {
        cout << "Invalid shift encountered.\n";
    }
    catch (ProductionWorker::InvalidPayRate) {
        cout << "Invalid pay rate encountered.\n";
    }
}