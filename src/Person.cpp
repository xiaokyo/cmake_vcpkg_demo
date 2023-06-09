#include "Person.h"

Person::Person(int age) : age(age) {
  std::cout << "Person constructor called" << std::endl;
}

Person::~Person() { std::cout << "Person destructor called" << std::endl; }

void Person::print() { std::cout << "age = " << this->age << std::endl; }