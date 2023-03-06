#ifndef NODE_H
#define NODE_H
#include "Integer.h"

class Node {
    private:
        Integer* data;
        Node* next;

    public:
        Node() = delete;
        Node(int);

        // Destructor for Node class, think about why we need a destructor here, when it will be called
        // and what it should do.
        ~Node();
        
        friend class LinkedList;
};


#endif