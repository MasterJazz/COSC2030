//
// Matthew Sleight
// April 15, 2025
// Inventory Bin Stack Programming Project
// COSC 2030
//

#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <iostream>

using namespace std;

class Inventory {
    private:
        int serialNum;
        string manufactDate;
        int lotNum;

    public:
        Inventory();
        Inventory(int serial, string date, int lot);
        void setValues(int serial, string data, int lot);
        void display() const;
};

#endif