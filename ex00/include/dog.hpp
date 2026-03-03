#pragma once
#include "animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{

private:
public:
  Dog ();
  ~Dog ();
  Dog (const Dog &copy);
  Dog &operator= (const Dog &other);
  void makeSound () const;
};
