#pragma once
#include "animal.hpp"
#include "brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{

private:
  Brain *_dogBrain;
public:
  Dog ();
  ~Dog ();
  Dog (const Dog &copy);
  Dog &operator= (const Dog &other);
  void makeSound () const;
  Brain* getBrain() const;
};
