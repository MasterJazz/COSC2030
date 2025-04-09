//
// Matthew Sleight
// April 8, 2025
// Your Own Linked List Programming Project
// COSC 2030
//

// Compile Notes
//
// g++ main.cpp LinkedList.cpp -o output

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    // Define a LinkedList object
    LinkedList list;

    // Build the list with some values
    cout << "Appending 15, 30, and 45 to the list: " << endl;
    list.appendNode(15);
    list.appendNode(30);
    list.appendNode(45);

    // Display the list
    list.displayList();

    // Build the list with some values
    cout << "Inserting 60 into the list: " << endl;
    list.insertNode(60);

    // Display the list
    list.displayList();

    // Build the list with some values
    cout << "Removing 15 and 60 from the list: " << endl;
    list.removeNode(15);
    list.removeNode(60);

    // Display the list
    list.displayList();

    return 0;
}