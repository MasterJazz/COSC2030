//
// Matthew Sleight
// March 30, 2025
// Unique Words Programming Project
// COSC 2030
//

#include <iostream>
#include <fstream>
#include <set>
#include <cctype>

using namespace std;

int main() {
    string filename = "Kennedy.txt";    // File to open
    ifstream inputFile(filename);       // Open the file for reading

    if(!inputFile) {
        cout << "Could not open the file " << filename << endl;
        return 1;
    }

    // Set to store unique words
    set<string> uniqueWords;
    string word;

    // Read the file word by word
    while (inputFile >> word) {
        // Remove puncuation and convert to lowercase
        for (char &c : word) {
            c = tolower(c);
            if (ispunct(c)) {
                // Replace puncuation with a space
                c = ' ';
            }
        }

        // Add word to the set (automatically handles duplicates)
        if (!word.empty()) {
            uniqueWords.insert(word);
        }
    }

    // Display all unique words
    cout << "Unique words found in the file: " << endl;
    for (const auto &w : uniqueWords) {
        cout << w << endl;
    }

    // Close the file
    inputFile.close();

    return 0;
}