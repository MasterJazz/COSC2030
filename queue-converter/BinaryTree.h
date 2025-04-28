//
// Matthew Sleight
// April 27, 2025
// Queue Converter Programming Project
// COSC 2030
//

#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
#include <queue>

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

        // Private helper function
        int countNodes(TreeNode *nodePtr);
        void insert(TreeNode *&nodePtr, T value);
        void displayInOrder(TreeNode *nodePtr);
        void remove(TreeNode *&nodePtr, T value);
        void destroySubTree(TreeNode *nodePtr);
        void fillQueue(TreeNode *nodePtr, queue<T> &q);

    public:
        BinaryTree();
        ~BinaryTree();

        int numNodes();
        void insertNode(T value);
        void displayInOrder();
        void remove(T value);
        void fillQueueInOrder(queue<T> &q);
};

#endif