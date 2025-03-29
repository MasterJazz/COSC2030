//
// Matthew Sleight
// March 29, 2025
// Course Information Programming Project
// COSC 2030
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main () {
    string courseNumber;    // To hold a course number

    // A map containing course numbers and room numbers
    map<string, string> courseRoom = { { "CS101", "3004" },{ "CS102", "4501" },
                                       { "CS103", "6755" },{ "NT110", "1244" },
                                       { "CM241", "1411" } };
    
    // A map containing course numbers and instructors
    map<string, string> courseInstructor = { { "CS101", "Haynes" },{ "CS102", "Alvarado" },
                                             { "CS103", "Rich" },{ "NT110", "Burke" },
                                             { "CM241", "Lee" } };

    // A map containing course numbers and meeting times
    map<string, string> courseTimes = { { "CS101", "8:00 A.M." },{ "CS102", "9:00 A.M." },
                                        { "CS103", "10:00 A.M." },{ "NT110", "11:00 A.M." },
                                        { "CM241", "1:00 P.M." } };

    // Get a course number from the user
    cout << "Enter a course number to get information about that course: ";
    getline(cin, courseNumber);

    // Display information about the course
    if (courseRoom.count(courseNumber)) {
        cout << "Room number: " << courseRoom.at(courseNumber) << endl;
        cout << "Instructor: " << courseInstructor.at(courseNumber) << endl;
        cout << "Meeting time: " << courseTimes.at(courseNumber) << endl;
    } else {
        cout << "Invalid course" << endl;
    }

    return 0;
}