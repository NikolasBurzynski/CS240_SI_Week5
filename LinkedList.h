#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"

template <typename T>
class LinkedList {
    private:
        Node<T> * head;
        Node<T> * tail;
        int num_nodes;

    public:

        LinkedList();
        
        // Destructor for LinkedList class, think about why we need a destructor here, when it will be called
        // and what it should do.
        ~LinkedList();

        // insert_front should place a new node at the head of the linked list
        // and return a pointer to that node.
        Node<T>* insert_front(T);

        // insert_back should place a new node at the end of the linked list
        // and return a pointer to that node.
        Node<T>* insert_back(T);

        // print_list should go through all the nodes in the linked list and print
        // the value stored in the Integer object.
        void print_list();

        

};

#include "LinkedList.cpp"

#endif