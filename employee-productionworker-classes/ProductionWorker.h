//
// Matthew Sleight
// March 2, 2025
// Employee and ProductionWorker Classes Programming Project
// COSC 2030
//

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

using namespace std;

class ProductionWorker : public Employee {
    private:
        int shift;          // 1 for Day, 2 for Night
        double payRate;     // Hourly pay rate

    public:
        // Constants for shifts
        static const int DAY_SHIFT = 1;
        static const int NIGHT_SHIFT = 2;

        // Constructors
        ProductionWorker(string n = "", string num = "", string date = "",
                         int sh = DAY_SHIFT, double rate = 0.0);

        // Setters
        void setShift(int sh);
        void setPayRate(double rate);

        // Getters
        int getShift() const;
        double getPayRate() const;

        // Convert object to string
        string toString() const;

        // Display function
        void display() const;
};

#endif