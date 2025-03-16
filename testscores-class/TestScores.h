//
// Matthew Sleight
// March 16, 2025
// TestScores Class Programming Project
// COSC 2030
//

#ifndef TESTSCORES_H
#define TESTSCORES_H

#include <vector>

using namespace std;

class TestScores {
    private:
        vector<int> scores;

        // Function to validate scores
        void validateScores();

    public:
        // Exception class
        class InvalidScore {};

        // Constructor
        TestScores(const vector<int>& testScores);

        // Function to calculate the average
        double getAverage() const;
};

#endif