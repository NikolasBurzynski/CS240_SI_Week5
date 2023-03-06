#include "Integer.h"
#include <iostream>

Integer::Integer(int val): data(val) {}

std::ostream & operator<<(std::ostream & os, const Integer & Int) {
    os << Int.data;
    return os;
}
