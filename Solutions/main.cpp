#include <iostream>
#include "LinkedList.h"

int main() {
    auto list = new LinkedList();

    for(int i = 0; i < 10; i++) {
        list->insert_front(i);
    }

    for(int i = 0; i < 10; i++) {
        list->insert_back(i);
    }

    list->print_list();
     
    delete list;
}