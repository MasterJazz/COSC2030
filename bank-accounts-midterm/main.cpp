//
// Matthew Sleight
// March 9, 2025
// Bank Accounts Midterm Programming Project
// COSC 2030
//

// Compile Notes
//
// g++ main.cpp Account.cpp SavingsAccount.cpp CheckingAccount.cpp -o output

#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include <iostream>

using namespace std;

// Function Prototype
void processAccount(Account& account, const string& accountType);

int main() {
    double initialBalance;
    double interestRate;

    cout << "-----------------------Bank Account-----------------------\n";

    // Savings Account
    cout << "Savings Account:\n";
    cout << "Enter initial balance for savings account: ";
    cin >> initialBalance;
    cout << "Enter annual interest rate (decimal) for savings account: ";
    cin >> interestRate;

    // Create a SavingsAccount object
    SavingsAccount savings(initialBalance, interestRate);

    // Process Savings Account
    processAccount(savings, "Savings");

    // Separator
    cout << "----------------------------------------------------------\n";

    // Checking Account
    cout << "Checking Account:\n";
    cout << "Enter initial balance for checking account: ";
    cin >> initialBalance;
    cout << "Enter annual interest rate (decimal) for checking account: ";
    cin >> interestRate;

    // Create a CheckingAccount object
    CheckingAccount checking(initialBalance, interestRate);

    // Process Checking Account
    processAccount(checking, "Checking");

    cout << "----------------------------------------------------------\n";
    return 0;
}

/**
 * Processes deposits, withdrawals, and monthly processing for an account
 * @param account - Reference to an Account object (Savings or Checking)
 * @param accountType - The type of account being processed ("Savings" or "Checking")
 */

void processAccount(Account& account, const string& accountType) {
    double amount;

    cout << "\n" << accountType << " Account Transactions:\n";

    // Handle deposit transaction
    cout << "Enter deposit amount: ";
    cin >> amount;
    if (amount > 0) {
        account.deposit(amount);
    }

    // Handle withdrawal transaction
    cout << "Enter withdrawal amount: ";
    cin >> amount;
    if (amount > 0) {
        account.withdraw(amount);
    }

    // Apple monthly processing
    account.monthlyProc();
}