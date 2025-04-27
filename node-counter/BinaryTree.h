//
// Matthew Sleight
// April 27, 2025
// Node Counter Programming Project
// COSC 2030
//

#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
using namespace std;

template <class T>
class BinaryTree {
    private:
        struct TreeNode {
            T value;
            TreeNode *left;
            TreeNode *right;

            // Constructor
            TreeNode(T val);
        };

        TreeNode *root;

        // Private helper
        int countNodes(TreeNode *nodePtr);
        void insert(TreeNode *&nodePtr, T value);
        void displayInOrder(TreeNode *nodePtr);
        void remove(TreeNode *&nodePtr, T value);
        void destroySubTree(TreeNode *nodePtr);

    public:
        BinaryTree();
        ~BinaryTree();

        int numNodes();
        void insertNode(T value);
        void displayInOrder();
        void remove(T value);
};

#endif