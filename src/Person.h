#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person {
public:
  Person(int page);
  ~Person();
  void print();

  // int get_age();

private:
  int age{0};
};

#endif