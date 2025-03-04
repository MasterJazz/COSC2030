//
// Matthew Sleight
// March 3, 2025
// PersonData and CustomerData Classes Programming Project
// COSC 2030
//

#ifndef PERSONDATA_H
#define PERSONDATA_H

#include <string>

using namespace std;

class PersonData {
    private:
        string lastName;
        string firstName;
        string address;
        string city;
        string state;
        string zip;
        string phone;
    
    public:
        // Constructors
        PersonData(string last = "", string first = "", string a = "", string c = "",
                    string s = "", string z = "", string p = "");
        
        // Mutators (setters)
        void setLastName(string last);
        void setFirstName(string first);
        void setAddress(string a);
        void setCity(string c);
        void setState(string s);
        void setZip(string z);
        void setPhone(string p);

        // Accessors (getters)
        string getLastName() const;
        string getFirstName() const;
        string getAddress() const;
        string getCity() const;
        string getState() const;
        string getZip() const;
        string getPhone() const;

        // Convert object to string
        string toString() const;

        // Display function
        void display() const;
};

#endif