//
// Matthew Sleight
// March 3, 2025
// PersonData and CustomerData Classes Programming Project
// COSC 2030
//

#include "PersonData.h"
#include <iostream>

using namespace std;

// Constructor
PersonData::PersonData(string last, string first, string a, string c,
                        string s, string z, string p) {
    lastName = last;
    firstName = first;
    address = a;
    city = c;
    state = s;
    zip = z;
    phone = p;
}

// Setters
void PersonData::setLastName(string last) { lastName = last; }
void PersonData::setFirstName(string first) { firstName = first; }
void PersonData::setAddress(string a) { address = a; }
void PersonData::setCity(string c) { city = c; }
void PersonData::setState(string s) { state = s; }
void PersonData::setZip(string z) { zip = z; }
void PersonData::setPhone(string p) { phone = p; }

// Getters
string PersonData::getLastName() const { return lastName; }
string PersonData::getFirstName() const { return firstName; }
string PersonData::getAddress() const { return address; }
string PersonData::getCity() const { return city; }
string PersonData::getState() const { return state; }
string PersonData::getZip() const { return zip; }
string PersonData::getPhone() const { return phone; }

// Convert to string
string PersonData::toString() const {
    return "\nName: " + firstName + " " + lastName + "\nAddress: " + address
            + "\nCity: " + city + "\nState: " + state + "\nZIP: " + zip
            + "\nPhone: " + phone;
}

// Display function
void PersonData::display() const {
    cout << toString() << endl;
}