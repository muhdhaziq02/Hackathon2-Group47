#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Item.h"
#include "Enemy.h"

template <class T>
class ListNode {
public:
    T value;
    ListNode<T>* next;

    ListNode(const T& nodeValue) : value(nodeValue), next(nullptr) {}
};

template <>
class ListNode<Enemy> { // Specialization for Enemy type
public:
    Enemy value;
    ListNode<Enemy>* next;

    ListNode(const Enemy& nodeValue) : value(nodeValue), next(nullptr) {}
};

template <class T>
class LinkedList {
private:
    ListNode<T>* head;

public:
    LinkedList() : head(NULL) {}
    ~LinkedList();

    void appendNode(const T&);
    void displayList() const;
    void searchNode(const string& name);
    int getLength() const;
};

template <class T>
LinkedList<T>::~LinkedList() {
    ListNode<T>* nodePtr = head;
    while (nodePtr != NULL) {
        ListNode<T>* nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

template <class T>
void LinkedList<T>::appendNode(const T& newValue) {
    ListNode<T>* newNode = new ListNode<T>(newValue);

    if (head == NULL) {
        head = newNode;
    } else {
        ListNode<T>* nodePtr = head;
        while (nodePtr->next != NULL) {
            nodePtr = nodePtr->next;
        }
        nodePtr->next = newNode;
    }
}

template <class T>
void LinkedList<T>::displayList() const {
    ListNode<T>* nodePtr = head;

    while (nodePtr != NULL) {
        nodePtr->value.displayData();
        nodePtr = nodePtr->next;
    }
}

template <class T>
void LinkedList<T>::searchNode(const string& name) {
    ListNode<T>* currentNode = head;

    while (currentNode != NULL) {
        if (currentNode->value.getName() == name) {
            currentNode->value.displayData();  // Print the data of the found node
            return;
        }
        currentNode = currentNode->next;
    }
    cout << name << ". That's awesome!" << endl;
}

template <class T>
int LinkedList<T>::getLength() const {
    int length = 0;
    ListNode<T>* currentNode = head;

    while (currentNode != NULL) {
        length++;
        currentNode = currentNode->next;
    }

    return length;
}



#endif


