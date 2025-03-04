//
// Matthew Sleight
// March 3, 2025
// PersonData and CustomerData Classes Programming Project
// COSC 2030
//

// Compiler Notes
//
// g++ main.cpp PersonData.cpp CustomerData.cpp -o output

#include "CustomerData.h"
#include <iostream>

using namespace std;

int main() {
    // Create CustomerData objects
    CustomerData customer1("Sleight", "Matthew", "2600 College Dr", "Rock Springs", 
                            "Wyoming", "82901", "307-228-3089", 1001, true);
    CustomerData customer2("Richmand", "Jason", "123 Main St", "Rock Springs", 
                            "Wyoming", "82901", "307-555-5555", 1002, false);

    // Display information
    cout << "-------------------------\n";
    cout << "Customer 1 Info:\n";
    customer1.display();
    cout << "-------------------------\n";
    cout << "Customer 2 Info:\n";
    customer2.display();
}