//
// Matthew Sleight
// April 15, 2025
// Inventory Bin Stack Programming Project
// COSC 2030
//

// Compile Notes
//
// g++ main.cpp Inventory.cpp InventoryStack.cpp -o output

#include <iostream>
#include "Inventory.h"
#include "InventoryStack.h"

using namespace std;

int main() {
    InventoryStack stack;
    int choice;

    do {
        cout << "\n1. Add part to inventory";
        cout << "\n2. Take part from inventory";
        cout << "\n3. Exit and display remaining inventory\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int serial, lot;
            string date;

            cout << "Enter Serial Number: ";
            while (!(cin >> serial)) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Please enter a numeric serial number: ";
            }

            cin.ignore();

            cout << "Enter Manufacture Date: ";
            getline(cin, date);

            cout << "Enter Lot Number: ";
            while (!(cin >> lot)) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Please enter a numeric serial number: ";
            }

            cin.ignore();

            Inventory part(serial, date, lot);
            stack.push(part);
            cout << "Part added to inventory.\n";

        } else if (choice == 2) {
            Inventory part;
            stack.pop(part);
            cout << "Removed part:\n";
            part.display();

        } else if (choice == 3) {
            cout << "\nRemaining inventory:\n";
            stack.displayAll();
        }
    } while (choice != 3);

    return 0;
}