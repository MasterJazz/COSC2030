//
// Matthew Sleight
// April 27, 2025
// Queue Converter Programming Project
// COSC 2030
//

// Compile Notes
//
// g++ main.cpp BinaryTree.cpp -o output

#include "BinaryTree.h"
#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Create a binary tree to hold integers
    BinaryTree<int> tree;

    // Insert some nodes into the tree
    cout << "Inserting nodes.\n";
    tree.insertNode(7);
    tree.insertNode(12);
    tree.insertNode(6);
    tree.insertNode(19);
    tree.insertNode(3);

    // Display the tree
    cout << "\nHere are the values in the tree (in-order):\n";
    tree.displayInOrder();

    // Create a queue to hold the values
    queue<int> valueQueue;

    // Fill the queue in ascending order
    cout << "\nAdding tree values to the queue ascending order...\n";
    tree.fillQueueInOrder(valueQueue);

    // Display and dequeue all elements
    cout << "\nDequeuing and displaying values:\n";
    while (!valueQueue.empty()) {
        cout << valueQueue.front() << " \n";
        valueQueue.pop();
    }
    cout << endl;

    return 0;
}