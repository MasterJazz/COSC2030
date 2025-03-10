//
// Matthew Sleight
// March 9, 2025
// Bank Accounts Midterm Programming Project
// COSC 2030
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

using namespace std;

class Account {
    private:
        double balance;
        int numDeposits;
        int numWithdrawals;
        double annualInterestRate;
        double monthlyServiceCharges;
    
    public:
        // Constructor
        Account(double bal = 0.0, double interestRate = 0.0);

        // Mutators (setters)
        void setBalance(double bal);
        void setAnnualInterestRate(double rate);
        void setMonthlyServiceCharges(double charges);
        void setNumDeposits(int num);
        void setNumWithdrawals(int num);

        // Accessors (getters)
        double getBalance() const;
        int getNumDeposits() const;
        int getNumWithdrawals() const;
        double getAnnualInterestRate() const;
        double getMonthlyServiceCharges() const;

        // Virtual functions
        virtual void deposit(double amount);
        virtual bool withdraw(double amount);
        virtual void calcInt();
        virtual void monthlyProc();

        // Validation
        bool validateTransaction(double amount) const;

        // Display function
        virtual void display() const;
};

#endif