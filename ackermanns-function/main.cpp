//
// Matthew Sleight
// April 20 2025
// Ackermann's Function Programming Project
// COSC 2030
//

#include <iostream>

using namespace std;

// Function prototype
int ackermann(int m, int n);

int main() {
    // Displaying the required Ackermann values
    cout << "A(0, 0) = " << ackermann(0, 0) << endl;
    cout << "A(0, 1) = " << ackermann(0, 1) << endl;
    cout << "A(1, 1) = " << ackermann(1, 1) << endl;
    cout << "A(1, 2) = " << ackermann(1, 2) << endl;
    cout << "A(1, 3) = " << ackermann(1, 3) << endl;
    cout << "A(2, 2) = " << ackermann(2, 2) << endl;
    cout << "A(3, 2) = " << ackermann(3, 2) << endl;

    return 0;
}

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}