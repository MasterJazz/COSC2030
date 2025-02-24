//
// Matthew Sleight
// February 16, 2025
// Trivia Game Programming Project
// COSC 2030
//

// Compiling Notes
//
// g++ main.cpp Question.cpp -o output

#include <iostream>
#include <random>      // For srand() and rand()
#include <ctime>
#include "Question.h"

using namespace std;

// Function prototype
void shuffleQuestions(Question questions[], int size);
void askQuestion(Question q, int &score);
void displayWinner(int playerOneScore, int playerTwoScore);

int main() {
    // Create an array of 10 trivia questions
    Question questions[10] = {
        Question("\nA class is a(n) _____ that is defined by the programmer.", "Attribute", "Function", "Data Type", "Method", 3),
        Question("\nMembers of the class object are accessed with the...", "cin Object", "Extraction Operator", "Stream Insertion Operator", "Dot Operator", 4),
        Question("\nA C++ class is similar to a(n)...", "Library Function", "Structure", "Inline Function", "Header File", 2),
        Question("\nWhen you dereference an object pointer, use the...", "Dot Operator", "-> Operator", "<> Operator", "& Operator", 2),
        Question("\nBefore a structure can be used it must be...", "Dereferenced", "Initialized", "Declared", "All Of These", 3),
        Question("\nWith an enumerated data type, the enumerators are stored in memyer as...", "Characters", "Integers", "Strings", "Doubles", 2),
        Question("\nA function _____ return a structure.", "May", "Will Always", "Can Never", "May Not", 1),
        Question("\nA structure _____ contain members of the same data type.", "Cannot", "Shouldn't", "Can", "None Of These", 3),
        Question("\nThe name of a structure is referred to as its...", "Tag", "Data Type", "Parameter", "None Of These", 4),
        Question("\nIs Dr. Tammy a cool professor?", "Absolutely!", "Maybe", "Kind Of", "No :(", 1)
    };

    // Seed the random number generator to shuffle questions
    srand(time(0));

    // Shuffle the questions
    shuffleQuestions(questions, 10);

    int playerOneScore = 0, playerTwoScore = 0;

    // Ask 5 different questions to each player
    cout << "\nPlayer 1's turn:\n";
    for (int i = 0; i < 5; i++) {
        askQuestion(questions[i], playerOneScore);
    }

    cout << "\nPlayer 2's turn:\n";
    for (int i = 5; i < 10; i++) {
        askQuestion(questions[i], playerTwoScore);
    }

    // Display the final scores and declare the winner
    displayWinner(playerOneScore, playerTwoScore);

    return 0;
}

// Function to shuffle the array of questions
void shuffleQuestions(Question questions[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);

        // Swap questions[i] with questions[j]
        Question temp = questions[i];
        questions[i] = questions[j];
        questions[j] = temp;
    }
}

// Function to ask a question and update the score
void askQuestion(Question q, int &score) {
    cout << q.getQuestion() << endl;
    cout << "1. " << q.getAnswerOne() << endl;
    cout << "2. " << q.getAnswerTwo() << endl;
    cout << "3. " << q.getAnswerThree() << endl;
    cout << "4. " << q.getAnswerFour() << endl;

    int answer;
    cout << "Your answer (1-4): ";
    cin >> answer;

    if (answer == q.getCorrectAnswer()) {
        cout << "\nCorrect!\n";
        score++;
    } else {
        cout << "\nIncorrect. :(\n";
    }
}

// Function to display the winner
void displayWinner(int playerOneScore, int playerTwoScore) {
    cout << "\nFinal Scores:\n";
    cout << "Player 1: " << playerOneScore << endl;
    cout << "Player 2: " << playerTwoScore << endl;

    if (playerOneScore > playerTwoScore) {
        cout << "\nPlayer 1 wins!\n";
    }
    else if (playerTwoScore > playerOneScore) {
        cout << "\nPlayer 2 wins!\n";
    } else {
        cout << "\nIt's a tie!\n";
    }
}