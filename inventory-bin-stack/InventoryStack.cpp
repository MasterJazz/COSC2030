//
// Matthew Sleight
// April 15, 2025
// Inventory Bin Stack Programming Project
// COSC 2030
//

#include "InventoryStack.h"
#include <iostream>

InventoryStack::InventoryStack() {
    top = nullptr;
}

InventoryStack::~InventoryStack() {
    Inventory temp;
    while(!isEmpty()) {
        pop(temp);
    }
}

void InventoryStack::push(const Inventory &part) {
    StackNode *newNode = new StackNode{part, top};
    top = newNode;
}

void InventoryStack::pop(Inventory &part) {
    if (isEmpty()) {
        cout << "Stack is empty.\n";
        return;
    }

    part = top->item;
    StackNode *temp = top;
    top = top->next;
    delete temp;
}

bool InventoryStack::isEmpty() const {
    return top == nullptr;
}

void InventoryStack::displayAll() const {
    StackNode *nodePtr = top;
    while (nodePtr) {
        nodePtr->item.display();
        cout << "----------------------\n";
        nodePtr = nodePtr->next;
    }
}