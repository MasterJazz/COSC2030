//
// Matthew Sleight
// March 16, 2025
// TestScores Class Programming Project
// COSC 2030
//

#include "TestScores.h"
#include <iostream>
#include <vector>

using namespace std;

// Function Prototype
void testScores(const vector<int>& scores);

int main() {
    // Test valid scores
    cout << "Testing valid scores...\n";
    testScores({85, 90, 78, 92, 88});

    // Test invalid scores (negative value)
    cout << "\nTesting a negative score...\n";
    testScores({85, -5, 78, 92, 88});

    // Test invalid scores (over 100)
    cout << "\nTesting a score over 100...\n";
    testScores({85, 105, 78, 92, 88});

    return 0;
}

void testScores(const vector<int>& scores) {
    try {
        TestScores test(scores);
        cout << "Average Score: " << test.getAverage() << endl;
    }
    catch (TestScores::InvalidScore) {
        cout << "Error: Invalid test score encountered.\n";
    }
}