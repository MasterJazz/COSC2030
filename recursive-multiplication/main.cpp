//
// Matthew Sleight
// April 20 2025
// Recursive Multiplication Programming Project
// COSC 2030
//

#include <iostream>

using namespace std;

// Function prototype
int multiply(int, int);

int main() {
    int num1, num2;

    cout << "Enter 2 numbers and I will multiply them: ";
    cin >> num1 >> num2;
    cout << "Their product is " << multiply(num1, num2) << endl;

    return 0;
}

int multiply(int x, int y) {
    if (x == 0 || y == 0) {
        return 0;
    } else if (y == 1) {
        return x;
    } else {
        return x + multiply(x, y-1);
    }
}