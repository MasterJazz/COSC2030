//
// Matthew Sleight
// February 23, 2025
// NumDays Class Programming Project
// COSC 2030
//

#include <iostream>

using namespace std;

const int HOURS_PER_DAY = 8;

// NumDays class
class NumDays {
    private:
        double hours;

    public:
        // Constructor
        NumDays(double hrs)
        { hours = hrs; }

        // setHours function
        void setHours(double hrs)
        { hours = hrs;}

        // getHours function
        double getHours() const
        { return hours; }

        // getDays function
        double getDays() const
        { return hours / HOURS_PER_DAY; }

        // Overloaded + operator
        double operator+(const NumDays &right)
        { return hours + right.hours; }

        // Overloaded - operator
        double operator-(const NumDays &right)
        { return hours - right.hours; }

        // Prefix ++ operator
        double operator++()
        { return ++hours; }

        // Postfix ++ operator
        double operator++(int)
        { return hours++; }

        // Prefix -- operator
        double operator--()
        { return --hours; }

        // Postfix -- operator
        double operator--(int)
        { return hours--; }
};

int main() {
    // Test One

    NumDays testA(20.0);
    NumDays testB(16.0);

    cout << "testA hours: " << testA.getHours() << endl;
    cout << "testA days: " << testA.getDays() << endl;
    cout << "---------------------------\n";

    cout << "testB hours: " << testB.getHours() << endl;
    cout << "testB days: " << testB.getDays() << endl;
    cout << "---------------------------\n";

    return 0;

    // --------------------------------------------------------- //

    // Test Two

    // NumDays testA(20.0);
    // NumDays testB(16.0);

    // cout << "testA is set to " << testA.getHours() << endl;
    // cout << "testB is set to " << testA.getHours() << endl;
    // cout << "---------------------------\n";

    // cout << "The expression testA++ gives us " << testA++ << endl;
    // cout << "After the expression executes testA's hours are : "
    //      << testA.getHours() << endl << endl;

    // cout << "The expression ++testB gives us " << ++testB << endl;
    // cout << "After the expression executes testB's hours are : "
    //      << testB.getHours() << endl;
    // cout << "---------------------------\n";

    // return 0;

    // --------------------------------------------------------- //

    // Test Three

    // NumDays testA(20.0);
    // NumDays testB(16.0);

    // cout << "testA = " << testA.getHours() << endl;
    // cout << "testB = " << testB.getHours() << endl;
    // cout << "testA + testB = " << (testA + testB) << endl;
    // cout << "testA - testB = " << (testA - testB) << endl;

    // return 0;
}