//
// Matthew Sleight
// April 8, 2025
// Your Own Linked List Programming Project
// COSC 2030
//

#include <iostream>
#include "LinkedList.h"

using namespace std;

// Constructor initializes the head to nullptr
LinkedList::LinkedList() {
    head = nullptr;
}

// Destructor releases all memory used by the list
LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

// Appends a new node with the given value to the end of the list
void LinkedList::appendNode(int value) {
    Node* newNode = new Node(value);

    if (!head) {
        // If list is empty, new node becomes the head
        head = newNode;
    } else {
        // Otherwise, traverse to the end and append the node
        Node* current = head;
        while (current->next) {
            current = current->next;
        }

        current->next = newNode;
    }
}

// Inserts a new node into the list in sorted order
void LinkedList::insertNode(int value) {
    Node* newNode = new Node(value);

    if (!head || value < head->value) {
        // Insert at the beginning if list is empty or value is smallest
        newNode->next = head;
        head = newNode;
    } else {
        // Find the appropriate position
        Node* current = head;
        while (current->next && current->next->value < value) {
            current = current->next;
        }

        // Insert node
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Removes the first node with the given value
void LinkedList::removeNode(int value) {
    if (!head) return;

    if (head->value == value) {
        // Remove head if it matches the value
        Node* temp = head;
        head = head->next;
        delete temp;
    } else {
        // Search for the value in the list
        Node* current = head;
        while (current->next && current->next->value != value) {
            current = current->next;
        }

        if (current->next) {
            // Remove the node if found
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }
}

// Displays all values in the list
void LinkedList::displayList() const {
    Node* current = head;
    while (current) {
        cout << current->value << " ";
        current = current->next;
    }

    cout << endl;
}