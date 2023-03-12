#include <iostream>
#include "LinkedList.h"
#include "Integer.h"

int main() {
    auto list = new LinkedList<Integer>();

    for(int i = 0; i < 10; i++) {
        list->insert_front(i);
    }

    for(int i = 0; i < 10; i++) {
        list->insert_back(i);
    }

    list->print_list();
     
    delete list;
}