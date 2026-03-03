#pragma once
#include "animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{

private:
public:
  Cat ();
  ~Cat ();
  Cat (const Cat &copy);
  Cat &operator= (const Cat &other);
  void makeSound () const;
};
