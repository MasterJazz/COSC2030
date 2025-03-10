//
// Matthew Sleight
// March 9, 2025
// Bank Accounts Midterm Programming Project
// COSC 2030
//

#include "SavingsAccount.h"
#include <iostream>

using namespace std;

// Constructor
SavingsAccount::SavingsAccount(double bal, double interestRate)
                : Account(bal, interestRate) {
    status = (bal >= 25);
}

// Accessor
bool SavingsAccount::getStatus() const { return status; }

// Deposit function
void SavingsAccount::deposit(double amount) {
    Account::deposit(amount);
    if (getBalance() >= 25) {
        status = true;
    }
}

// Withdraw function
bool SavingsAccount::withdraw(double amount) {
    if (!status) {
        cout << "Withdrawal denied. Account is inactive." << endl;
        return false;
    }
    bool success = Account::withdraw(amount);
    if (getBalance() < 25) {
        status = false;
    }

    return success;
}

// Monthly processing
void SavingsAccount::monthlyProc() {
    if (getNumWithdrawals() > 4) {
        setMonthlyServiceCharges(getMonthlyServiceCharges() + (getNumWithdrawals() - 4));
    }
    
    Account::monthlyProc();
    if (getBalance() < 25) {
        status = false;
    }
}