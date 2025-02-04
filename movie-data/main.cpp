//
// Matthew Sleight
// February 3, 2025
// Movie Data Programming Project
// COSC 2030
//

#include <iostream>
#include <string>

using namespace std;

// Declaration of the MovieData structure
struct MovieData {
    string title;       // Movie title
    string director;    // Director's name
    int yearReleased;   // Year the movie was released
    int runningTime;    // Running time in minutes
};

// Function Prototypes
void displayMovieData(const MovieData &);

int main() {
    // Create two MovieData variables
    MovieData movieOne;
    MovieData movieTwo;

    // Get the details of movieOne
    cout << "Enter details for Movie 1:\n";
    cout << "Title: ";

    // Use getline in case the string input contains spaces
    getline(cin, movieOne.title);
    cout << "Director: ";
    getline(cin, movieOne.director);
    cout << "Year Released: ";

    // Use cin to grab numerical inputs (simple numbers)
    cin >> movieOne.yearReleased;
    cout << "Running Time (in minutes): ";
    cin >> movieOne.runningTime;
    cin.ignore();   // To clear the newline character from the input buffer

    // Get the details of movieTwo
    cout << "\nEnter details for Movie 2:\n";
    cout << "Title: ";

    getline(cin, movieTwo.title);
    cout << "Director: ";
    getline(cin, movieTwo.director);
    cout << "Year Released: ";

    cin >> movieTwo.yearReleased;
    cout << "Running Time (in minutes): ";
    cin >> movieTwo.runningTime;

    // Display information for movieOne
    cout << "\nMovie 1 Details:\n";
    displayMovieData(movieOne);

    // Display information for movieTwo
    cout << "\nMovie 2 Details:\n";
    displayMovieData(movieTwo);

    return 0;
}

void displayMovieData(const MovieData &movie) {
    // Display movie details in a clearly formatted manner
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
}