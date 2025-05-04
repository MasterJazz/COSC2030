//
// Matthew Sleight
// May 4, 2025
// Final Project
// COSC 2030
//

#ifndef SALESPERSON_H
#define SALESPERSON_H

class Salesperson {
    private:
        double sales;       // Monthly Sales
        double rate;        // Rate of Commission
        double commission;  // Amount of Commission
        double advance;     // Advance Pay Drawn
        double pay;         // Pay remaining to be paid

        // Sets the commission rate based on the sales amount
        void calculateCommissionRate();

    public:
        // Constructor to initialize sales and advance values
        Salesperson(double salesAmount, double advanceAmount);

        // Calculates the final pay
        void calculatePay();

        // Displays all the results
        void displayResults() const;
};

#endif