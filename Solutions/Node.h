#ifndef NODE_H
#define NODE_H
#include "Integer.h"

template <typename T> class LinkedList;


template <typename T>
class Node {
    private:
        T data;
        Node* next;

    public:
        Node() = delete;
        Node(T val): data(val) {
            next = nullptr; 
        };
        
        friend class LinkedList<T>;
};


#endif