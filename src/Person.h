#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person {
    public:
        Person(int page);
        void print();

        // int get_age();

    private:
        int age{0};
};

#endif