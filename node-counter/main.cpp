//
// Matthew Sleight
// April 27, 2025
// Node Counter Programming Project
// COSC 2030
//

// Compile Notes
//
// g++ main.cpp BinaryTree.cpp -o output

#include "BinaryTree.h"
#include <iostream>

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

    // Get the number of nodes
    cout << "\nNumber of nodes: "
         << tree.numNodes() << endl;
    cout << "\nHere are the values in the tree:\n";

    // Display the tree
    tree.displayInOrder();

    // Delete some nodes from the tree
    cout << "Deleting 6...\n";
    tree.remove(6);
    cout << "Deleting 12...\n";
    tree.remove(12);

    // Get the number of nodes
    cout << "\nNumber of nodes: "
         << tree.numNodes() << endl;

    // Display the nodes
    cout << "Now, here are the nodes:\n";
    tree.displayInOrder();

    return 0;
}