//
// Matthew Sleight
// March 9, 2025
// Bank Accounts Midterm Programming Project
// COSC 2030
//

#include "CheckingAccount.h"
#include <iostream>

using namespace std;

// Constructor
CheckingAccount::CheckingAccount(double bal, double interestRate)
                : Account(bal, interestRate) {}

// Withdraw function
bool CheckingAccount::withdraw(double amount) {
    if (getBalance() - amount < 0) {
        cout << "Insufficient funds. A $15 overdraft fee will be charged." << endl;
        setMonthlyServiceCharges(getMonthlyServiceCharges() + 15);  // Apply overdraft fee
        return false;   // Do not allow withdrawl
    }

    return Account::withdraw(amount);
}

// Monthly processing
void CheckingAccount::monthlyProc() {
    if (getNumWithdrawals() > 4) {
        setMonthlyServiceCharges(getMonthlyServiceCharges() + (getNumWithdrawals() - 4) * 1.00);
    }

    // Add $5 base fee + $0.10 per withdrawl
    setMonthlyServiceCharges(getMonthlyServiceCharges() + 5 + (getNumWithdrawals() * 0.10));

    Account::monthlyProc();
}