//
// Matthew Sleight
// April 15, 2025
// Inventory Bin Stack Programming Project
// COSC 2030
//

#ifndef INVENTORYSTACK_H
#define INVENTORYSTACK_H

#include "Inventory.h"

class InventoryStack {
    private:
        struct StackNode {
            Inventory item;
            StackNode *next;
        };

        StackNode *top;

    public:
        InventoryStack();
        ~InventoryStack();
        void push(const Inventory &);
        void pop(Inventory &);
        bool isEmpty() const;
        void displayAll() const;
};

#endif