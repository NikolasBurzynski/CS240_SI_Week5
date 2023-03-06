#include "Node.h"

// Allocate a new Integer on the heap and then
// store the pointer to it in the Node
Node::Node(int val) {
   data = new Integer(val);
   next = nullptr; 
}

Node::~Node() {
   delete data;
}