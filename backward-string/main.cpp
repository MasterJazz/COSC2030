//
// Matthew Sleight
// January 24, 2025
// Backward String Programming Project
// COSC 2030
//

// This program will accept a pointer to a C-string as an 
// argument and display the given content backwards.

#include <iostream>
#include <cstring>

using namespace std;

// Function prototype
void backwardString(char *);

int main() {
    // Define an array to hold input
    const int SIZE = 80;
    char input[SIZE];

    // Get a string from the user
    cout << "This program will display your input backwards. Enter a string:\n";
    cin.getline(input, SIZE);

    // Display string backwards
    backwardString(input);
    return 0;
}

void backwardString(char *str) {
    // Find the length of str then subtract by 1
    // to get the last character in the string
    int lastChar = strlen(str) -1;

    // Create a for loop that grabs each character
    // from first to last and display it
    for (int index = lastChar; index >= 0; index--)
        cout << str[index];

    // End the line
    cout << endl;
}