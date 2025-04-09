//
// Matthew Sleight
// April 8, 2025
// Your Own Linked List Programming Project
// COSC 2030
//

// A class template for holding a linked list
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList {
    private:
        // Declare a structor for the list
        struct Node {
            int value;      // The value in this node
            Node* next;     // Pointer to the next node

            // Constructor to simplify node creation
            Node(int val) : value(val), next(nullptr) {}
        };

        // Pointer to the first node in the list
        Node* head;

    public:
        // Constructor
        LinkedList();

        // Destructor
        ~LinkedList();

        // Linked list operations
        void appendNode(int value);     // Append to end
        void insertNode(int value);     // Insert in order
        void removeNode(int value);     // Remove value
        void displayList() const;       // Display list
};

#endif