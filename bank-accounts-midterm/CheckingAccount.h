//
// Matthew Sleight
// March 9, 2025
// Bank Accounts Midterm Programming Project
// COSC 2030
//

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account {
    public:
        // Constructor
        CheckingAccount(double bal, double interestRate);

        // Withdraw function
        bool withdraw(double amount);

        // Monthly processing
        void monthlyProc();
};

#endif