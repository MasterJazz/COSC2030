//
// Matthew Sleight
// March 16, 2025
// TestScores Class Programming Project
// COSC 2030
//

#include "TestScores.h"
#include <iostream>
#include <numeric>

using namespace std;

// Constructor
TestScores::TestScores(const vector<int>& testScores) {
    scores = testScores;
    validateScores();
}

// Function to validate scores
void TestScores::validateScores() {
    for (int score : scores) {
        if (score < 0 || score > 100) {
            throw InvalidScore();
        }
    }
}

// Function to calculate the average
double TestScores::getAverage() const {
    // Avoid division by 0
    if (scores.empty()) {
        return 0;
    }
    
    double sum = 0;
    for (int score : scores) {
        sum += score;
    }
    return sum / scores.size();
}