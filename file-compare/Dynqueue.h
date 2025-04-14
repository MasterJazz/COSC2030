//
// Matthew Sleight
// April 13, 2025
// File Compare Programming Project
// COSC 2030
//

#ifndef DYNQUEUE_H
#define DYNQUEUE_H

#include <iostream>

using namespace std;

// Dynqueue class template
template <class T>
class Dynque {
    private:
        struct QueueNode {
            T value;
            QueueNode *next;
        };

        QueueNode *front;
        QueueNode *rear;
        int numItems;
    public:
        Dynque();
        ~Dynque();
        void enqueue(T);
        void dequeue(T &);
        bool isEmpty();
        bool isFull();
        void clear();
};

// Constructor
template <class T>
Dynque<T>::Dynque() {
    front = rear = nullptr;
    numItems = 0;
}

// Destructor
template <class T>
Dynque<T>::~Dynque() {
    clear();
}

// Enqueue: Adds a new node at the rear
template <class T>
void Dynque<T>::enqueue(T item) {
    QueueNode *newNode = new QueueNode{item, nullptr};

    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    numItems++;
}

// Dequeue: Removes from the front
template <class T>
void Dynque<T>::dequeue(T &item) {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return;
    }

    item = front->value;
    QueueNode *temp = front;
    front = front->next;
    delete temp;
    numItems--;

    if (front == nullptr) {
        rear = nullptr;
    }
}

// isEmpty: returns true if no items
template <class T>
bool Dynque<T>::isEmpty() {
    return numItems == 0;
}

// isFull: always false for linked list
template <class T>
bool Dynque<T>::isFull() {
    return false;
}

// clear: removes all elements
template <class T>
void Dynque<T>::clear() {
    T temp;
    while (!isEmpty()) {
        dequeue(temp);
    }
}

#endif