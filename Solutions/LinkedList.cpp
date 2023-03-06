#include <iostream>
#include "LinkedList.h"


LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
    num_nodes = 0;
}

LinkedList::~LinkedList() {
    Node * index = head;
    while (index != nullptr) {
        Node * next = index->next;
        delete index;
        index = next;
    }
}

Node * LinkedList::insert_back(int val) {
    // IMPLEMENTATION REQUIRED
    auto new_node = new Node(val);
    if(tail != nullptr) {
        tail->next = new_node;
    } else { //This means the list is empty so we are inserting at both the head and the tail
        head = new_node;
    }
    tail = new_node;
    num_nodes++;
    return tail;
}

Node * LinkedList::insert_front(int val) {
    auto new_node = new Node(val);
    new_node->next = head;
    head = new_node;
    if (tail == nullptr){ //this means the list is empty so we are inserting at both the head and the tail
        tail = new_node;
    }
    return head;
}

void LinkedList::print_list() {
    auto index = head;
    while (index != nullptr) {
        std::cout << *(index->data) << ", ";
        index = index->next;
    }
    std::cout << std::endl;
}
        
