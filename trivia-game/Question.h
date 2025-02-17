//
// Matthew Sleight
// February 16, 2025
// Trivia Game Programming Project
// COSC 2030
//

#ifndef QUESTION_H
#define QUESTION_H
#include <string>

using namespace std;

class Question {
    private:
        string question;        // The trivia question
        string answerOne;       // Answer choice 1
        string answerTwo;       // Answer choice 2
        string answerThree;     // Answer choice 3
        string answerFour;      // Answer choice 4
        int correctAnswer;      // The number of the correct answer (1, 2, 3, or 4)
    
    public:
        // Constructors
        Question(string q, string a1, string a2, string a3, string a4, int correct);
        Question();

        // Mutators
        void setQuestion(string q);
        void setAnswerOne(string a1);
        void setAnswerTwo(string a2);
        void setAnswerThree(string a3);
        void setAnswerFour(string a4);
        void setCorrectAnswer(int correct);

        // Accessors
        string getQuestion() const;
        string getAnswerOne() const;
        string getAnswerTwo() const;
        string getAnswerThree() const;
        string getAnswerFour() const;
        int getCorrectAnswer() const;
};

#endif