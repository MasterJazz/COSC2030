//
// Matthew Sleight
// January 26, 2025
// Pig Latin Programming Project
// COSC 2030
//

// This program will take your input and turn it into Pig Latin
//
// English: I SLEPT MOST OF THE NIGHT
// Pig Latin: IAY LEPTSAY OSTMAY FOAY HETAY IGHTNAY

#include <iostream>
#include <cstring>

using namespace std;

// Function Prototype
void pigLatinConversion(const char* word);

int main() {
    char input[1000];
    char word[100];
    int i = 0, j = 0; // Indexes for input and word arrays

    cout << "This program will convert your input into Pig Latin. Give it a try!\n";
    cin.getline(input, 1000); // Get input from the user

    // Loop through the input string
    while (input[i] != '\0') {
        // Extract each word
        while (input[i] != ' ' && input[i] != '\0') {
            word[j] = input[i]; // Copy the character to 'word'
            i++;
            j++;
        }

        // Null-terminate the word
        word[j] = '\0';

        // Pig Latin conversion
        if (j > 0) {
            pigLatinConversion(word); // Call the function for conversion
        }

        // Reset for the next word
        j = 0;

        // Skip the space (if any)
        if (input[i] == ' ') {
            cout << " "; // Add a space after the word conversion
            i++; // Move past the space
        }
    }

    cout << endl;
    return 0;
}

// Function to convert a word into Pig Latin
void pigLatinConversion(const char* word) {
    int length = strlen(word); // Use strlen to get the length of the word

    // Pig Latin conversion
    if (length > 0) {
        cout << word + 1 << word[0] << "ay";
    }
}