#ifndef INTEGER_H
#define INTEGER_H

#include <iostream>

//Wrapper Class for Integer.

class Integer {

    private:
        int data;

    public:
        Integer() = delete;
        Integer(int);

        friend std::ostream& operator<< (std::ostream&, const Integer&);
};

#endif