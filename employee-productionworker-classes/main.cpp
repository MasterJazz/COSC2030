//
// Matthew Sleight
// March 2, 2025
// Employee and ProductionWorker Classes Programming Project
// COSC 2030
//

// Compiler Notes
//
// g++ main.cpp Employee.cpp ProductionWorker.cpp -o output

#include "ProductionWorker.h"

#include <iostream>

using namespace std;

int main() {
    // Create ProductionWorker objects
    ProductionWorker worker1("John Spicer", "234-A", "02/15/2024", ProductionWorker::DAY_SHIFT, 25.50);
    ProductionWorker worker2("Matthew Sleight", "365-B", "06/10/2024", ProductionWorker::NIGHT_SHIFT, 30.75);

    // Display information
    cout << "Worker 1 Info:\n";
    worker1.display();
    cout << "\nWorker 2 Info:\n";
    worker2.display();

    return 0;
}