#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"

class LinkedList {
    private:
        Node * head;
        Node * tail;
        int num_nodes;

    public:

        LinkedList();
        
        // Destructor for LinkedList class, think about why we need a destructor here, when it will be called
        // and what it should do.
        ~LinkedList();

         

        // insert_front should place a new node at the head of the linked list
        // and return a pointer to that node.
        Node* insert_front(int);

        // insert_back should place a new node at the end of the linked list
        // and return a pointer to that node.
        Node* insert_back(int);

        // print_list should go through all the nodes in the linked list and print
        // the value stored in the Integer object.
        void print_list();

};

#endif