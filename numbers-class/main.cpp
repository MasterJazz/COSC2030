//
// Matthew Sleight
// February 23, 2025
// Numbers Class Programming Project
// COSC 2030
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Numbers {
    private:
        int number;     // The number to translate into English description
    
    public:
        // Constructor to initialize the number
        Numbers(int num);
        
        // Function to print the English description of the number
        void print();

    private:
        // Helper function to handle the conversion of numbers to English words
        string numberToWords(int num);

        // Statis arrays for translating numbers
        static const vector<string> lessThanTwenty; // Holds words for numbers 0-19
        static const vector<string> tens;           // Holds words for multiples of ten (20, 30, etc.)
        static const string hundred;                // Word for "hundred"
        static const string thousand;               // Word for "thousand"
};

// Statis arrays for number translations
const vector<string> Numbers::lessThanTwenty = {"zero", "one", "two", "three", "four",
                                                "five", "six", "seven", "eight", "nine",
                                                "ten", "eleven", "twelve", "thirteen",
                                                "fourteen", "fifteen", "sixteen", "seventeen",
                                                "eighteen", "nineteen"};

// Static array for tens (20, 30, 40, etc.)
const vector<string> Numbers::tens = {"", "", "twenty", "thirty", "fourty", "fifty", "sixty",
                                      "seventy", "eighty", "ninety"};
    
// "hundred" and "thousand" are stored as static strings
const string Numbers::hundred = "hundred";
const string Numbers::thousand = "thousand";

// Constructor definition
Numbers::Numbers(int num) : number(num) {}

// The 'print' function outputs the English translation of the number
void Numbers::print() {
    if (number == 0) {
        cout << lessThanTwenty[0] << endl;
    } else {
        cout << numberToWords(number) << endl;
    }
}

// Helper function definition
string Numbers::numberToWords(int num) {
    // If the number is 0, return an empty string
    if (num == 0) {
        return "";
    }
    // Handle numbers less than 20
    if (num < 20) {
        return lessThanTwenty[num];
    }
    // Handle numbers between 20 and 90
    if (num < 100) {
        // Get the tens place and append the ones place if it's not zero
        return tens[num / 10] + (num % 10 ? " " + lessThanTwenty[num % 10] : "");
    }
    // Handle numbers between 100 and 999
    if (num < 1000) {
        // Get the hundreds place, add "hundred", and handle the remainder recursively
        return lessThanTwenty[num / 100] + " " + hundred + (num % 100 ? " " + numberToWords(num % 100) : "");
    }

    // Handle numbers between 1000 and 9999
    return lessThanTwenty[num / 1000] + " " + thousand + (num % 1000 ? " " + numberToWords(num % 1000) : "");
}

int main() {
    int num;

    // Prompt the user to enter a number between 0 and 9999
    cout << "Enter a number between 0 and 9999: ";
    cin >> num;

    // Check if the number is within the valid range
    if (num < 0 || num > 9999) {
        cout << "Number out of range. Please enter a number between 0 and 9999." << endl;
        return 1;   // Exit the program if the input is invalid
    }

    // Create a Numbers object 'numObject' and print the English description
    Numbers numObject(num);
    numObject.print();

    return 0;
}