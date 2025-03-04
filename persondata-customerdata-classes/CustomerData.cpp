//
// Matthew Sleight
// March 3, 2025
// PersonData and CustomerData Classes Programming Project
// COSC 2030
//

#include "CustomerData.h"
#include <iostream>

using namespace std;

// Constructor
CustomerData::CustomerData(string last, string first, string a, string c, string s, 
                        string z, string p, int num, bool mail)
                        : PersonData(last, first, a, c, s, z, p) {
    customerNumber = num;
    mailingList = mail;
}

// Setters
void CustomerData::setCustomerNumber(int num) { customerNumber = num; }
void CustomerData::setMailingList(bool mail) { mailingList = mail; }

// Getters
int CustomerData::getCustomerNumber() const { return customerNumber; }
bool CustomerData::getMailingList() const { return mailingList; }

// Convert to string
string CustomerData::toString() const {
    return PersonData::toString() + "\nCustomer Number: " + to_string(customerNumber)
            + "\nMailing List: " + (mailingList ? "Yes" : "No");
}

// Display function
void CustomerData::display() const {
    cout << toString() << endl;
}