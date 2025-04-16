//
// Matthew Sleight
// April 15, 2025
// Inventory Bin Stack Programming Project
// COSC 2030
//

#include "Inventory.h"

Inventory::Inventory() {
    serialNum = 0;
    manufactDate = "";
    lotNum = 0;
}

Inventory::Inventory(int serial, string date, int lot) {
    setValues(serial, date, lot);
}

void Inventory::setValues(int serial, string date, int lot) {
    serialNum = serial;
    manufactDate = date;
    lotNum = lot;
}

void Inventory::display() const {
    cout << "Serial Number: " << serialNum << endl;
    cout << "Manufacture Date: " << manufactDate << endl;
    cout << "Lot Number: " << lotNum << endl;
}