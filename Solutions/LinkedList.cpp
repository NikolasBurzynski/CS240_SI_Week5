#include <iostream>


template <typename T>
LinkedList<T>::LinkedList() {
    head = nullptr;
    tail = nullptr;
    num_nodes = 0;
}

template <typename T>
LinkedList<T>::~LinkedList() {
    auto index = head;
    while (index != nullptr) {
        auto next = index->next;
        delete index;
        index = next;
    }
}

template <typename T>
Node<T> * LinkedList<T>::insert_back(T val) {
    // IMPLEMENTATION REQUIRED
    auto new_node = new Node<T>(val);
    if(tail != nullptr) {
        tail->next = new_node;
    } else { //This means the list is empty so we are inserting at both the head and the tail
        head = new_node;
    }
    tail = new_node;
    num_nodes++;
    return tail;
}

template <typename T>
Node<T> * LinkedList<T>::insert_front(T val) {
    auto new_node = new Node<T>(val);
    new_node->next = head;
    head = new_node;
    if (tail == nullptr){ //this means the list is empty so we are inserting at both the head and the tail
        tail = new_node;
    }
    return head;
}

template <typename T>
void LinkedList<T>::print_list() {
    auto index = head;
    while (index != nullptr) {
        std::cout << index->data << ", ";
        index = index->next;
    }
    std::cout << std::endl;
}
        
