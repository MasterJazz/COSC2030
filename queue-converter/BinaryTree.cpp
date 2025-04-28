//
// Matthew Sleight
// April 27, 2025
// Queue Converter Programming Project
// COSC 2030
//

#include "BinaryTree.h"

// TreeNode constructor
template <class T>
BinaryTree<T>::TreeNode::TreeNode(T val) : value(val),
                        left(nullptr), right(nullptr) {}
                
// Constructor
template <class T>
BinaryTree<T>::BinaryTree() : root(nullptr) {}

// Destructor
template <class T>
BinaryTree<T>::~BinaryTree() {
    destroySubTree(root);
}

// Public methods
template <class T>
int BinaryTree<T>::numNodes() {
    return countNodes(root);
}

template <class T>
void BinaryTree<T>::insertNode(T value) {
    insert(root, value);
}

template <class T>
void BinaryTree<T>::displayInOrder() {
    displayInOrder(root);
}

template <class T>
void BinaryTree<T>::remove(T value) {
    remove(root, value);
}

template <class T>
void BinaryTree<T>::fillQueueInOrder(queue<T> &q) {
    fillQueue(root, q);
}

// Private methods
template <class T>
int BinaryTree<T>::countNodes(TreeNode *nodePtr) {
    if (nodePtr == nullptr)
        return 0;
    else
        return 1 + countNodes(nodePtr->left) + countNodes(nodePtr->right);
}

template <class T>
void BinaryTree<T>::insert(TreeNode *&nodePtr, T value) {
    if (nodePtr == nullptr)
        nodePtr = new TreeNode(value);
    else if (value < nodePtr->value)
        insert(nodePtr->left, value);
    else
        insert(nodePtr->right, value);
}

template <class T>
void BinaryTree<T>::displayInOrder(TreeNode *nodePtr) {
    if (nodePtr != nullptr) {
        displayInOrder(nodePtr->left);
        cout << nodePtr->value << " \n";
        displayInOrder(nodePtr->right);
    }
}

template <class T>
void BinaryTree<T>::fillQueue(TreeNode *nodePtr, queue<T> &q) {
    if (nodePtr != nullptr) {
        fillQueue(nodePtr->left, q);
        q.push(nodePtr->value);
        fillQueue(nodePtr->right, q);
    }
}

template <class T>
void BinaryTree<T>::remove(TreeNode *&nodePtr, T value) {
    if (nodePtr == nullptr)
        return;
    if (value < nodePtr->value)
        remove(nodePtr->left, value);
    else if (value > nodePtr->value)
        remove(nodePtr->right, value);
    else {
        if (nodePtr->left == nullptr && nodePtr->right == nullptr) {
            delete nodePtr;
            nodePtr = nullptr;
        }
        else if (nodePtr->left == nullptr) {
            TreeNode *temp = nodePtr;
            nodePtr = nodePtr->right;
            delete temp;
        }
        else if (nodePtr->right == nullptr) {
            TreeNode *temp = nodePtr;
            nodePtr = nodePtr->left;
            delete temp;
        }
        else {
            TreeNode *successor = nodePtr->right;
            while (successor->left != nullptr)
                successor = successor->left;
            nodePtr->value = successor->value;
            remove(nodePtr->right, successor->value);
        }
    }
}

template <class T>
void BinaryTree<T>::destroySubTree(TreeNode *nodePtr) {
    if (nodePtr) {
        destroySubTree(nodePtr->left);
        destroySubTree(nodePtr->right);
        delete nodePtr;
    }
}

// *************************
// Explicit instantiations *
// *************************

template class BinaryTree<int>;
template class BinaryTree<double>;