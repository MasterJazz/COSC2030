//
// Matthew Sleight
// March 9, 2025
// Bank Accounts Midterm Programming Project
// COSC 2030
//

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
    private:
        bool status;    // Active or inactive
    
    public:
        // Constructor
        SavingsAccount(double bal, double interestRate);

        // Accessor
        bool getStatus() const;

        // Deposit and Withdraw functions
        void deposit(double amount);
        bool withdraw(double amount);

        // Monthly processing
        void monthlyProc();
};

#endif