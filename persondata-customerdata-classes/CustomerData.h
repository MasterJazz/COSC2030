//
// Matthew Sleight
// March 3, 2025
// PersonData and CustomerData Classes Programming Project
// COSC 2030
//

#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H

#include "PersonData.h"

class CustomerData : public PersonData {
    private:
        int customerNumber;
        bool mailingList;
    
    public:
        // Constructors
        CustomerData(string last = "", string first = "", string a = "", string c = "",
            string s = "", string z = "", string p = "", int num = 0, bool mail = false);
        
        // Mutators
        void setCustomerNumber(int num);
        void setMailingList(bool mail);

        // Accessors
        int getCustomerNumber() const;
        bool getMailingList() const;

        // Convert object to string
        string toString() const;

        // Display function
        void display() const;
};

#endif