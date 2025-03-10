//
// Matthew Sleight
// March 9, 2025
// Bank Accounts Midterm Programming Project
// COSC 2030
//

#include "Account.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Constructor
Account::Account(double bal, double interestRate) : balance(bal), numDeposits(0),
        numWithdrawals(0), annualInterestRate(interestRate), monthlyServiceCharges(0.0) {}

// Mutators (setters)
void Account::setBalance(double bal) { balance = bal; }
void Account::setAnnualInterestRate(double rate) { annualInterestRate = rate; }
void Account::setMonthlyServiceCharges(double charges) { monthlyServiceCharges = charges; }
void Account::setNumDeposits(int num) { numDeposits = num; }
void Account::setNumWithdrawals(int num) { numWithdrawals = num; }

// Accessors (getters)
double Account::getBalance() const { return balance; }
int Account::getNumDeposits() const { return numDeposits; }
int Account::getNumWithdrawals() const { return numWithdrawals; }
double Account::getAnnualInterestRate() const { return annualInterestRate; }
double Account::getMonthlyServiceCharges() const { return monthlyServiceCharges; }

// Transaction Validation
bool Account::validateTransaction(double amount) const { return amount > 0; }

// Deposit function
void Account::deposit(double amount) {
    if (validateTransaction(amount)) {
        balance += amount;
        numDeposits++;
    }
}

// Withdraw function
bool Account::withdraw(double amount) {
    if (validateTransaction(amount) && balance >= amount) {
        balance -= amount;
        numWithdrawals++;
        return true;
    }

    return false;
}

// Calculate Interest
void Account::calcInt() {
    double monthlyInterestRate = annualInterestRate / 12;
    double monthlyInterest = balance * monthlyInterestRate;
    balance += monthlyInterest;
}

// Monthly Processing
void Account::monthlyProc() {
    // Deduct service charges first
    balance -= monthlyServiceCharges;

    // Then calculate interest
    calcInt();

    // Display before resetting
    display();

    // Reset counters after processing
    numDeposits = 0;
    numWithdrawals = 0;
    monthlyServiceCharges = 0.0;
}

// Display account details
void Account::display() const {
    cout << fixed << setprecision(2);
    cout << "---------------------Account Summary---------------------\n";
    cout << "Final Balance: $" << balance << endl;
    cout << "Total Deposits: " << numDeposits << endl;
    cout << "Total Withdrawals: " << numWithdrawals << endl;
    cout << "Service Charges: $" << monthlyServiceCharges << endl;
}