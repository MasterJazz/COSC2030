//
// Matthew Sleight
// February 16, 2025
// Trivia Game Programming Project
// COSC 2030
//

#include "Question.h"

// Constructor that sets all data members
Question::Question(string q, string a1, string a2, string a3, string a4, int correct) {
    question = q;
    answerOne = a1;
    answerTwo = a2;
    answerThree = a3;
    answerFour = a4;
    correctAnswer = correct;
}

// Default constructor
Question::Question() {
    question = "";
    answerOne = "";
    answerTwo = "";
    answerThree = "";
    answerFour = "";
    correctAnswer = 0;
}

// Mutators
void Question::setQuestion(string q) {
    question = q;
}

void Question::setAnswerOne(string a1) {
    answerOne = a1;
}

void Question::setAnswerTwo(string a2) {
    answerTwo = a2;
}

void Question::setAnswerThree(string a3) {
    answerThree = a3;
}

void Question::setAnswerFour(string a4) {
    answerFour = a4;
}

void Question::setCorrectAnswer(int correct) {
    correctAnswer = correct;
}

// Accessors
string Question::getQuestion() const {
    return question;
}

string Question::getAnswerOne() const {
    return answerOne;
}

string Question::getAnswerTwo() const {
    return answerTwo;
}

string Question::getAnswerThree() const {
    return answerThree;
}

string Question::getAnswerFour() const {
    return answerFour;
}

int Question::getCorrectAnswer() const {
    return correctAnswer;
}