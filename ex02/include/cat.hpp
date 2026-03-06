#pragma once
#include "animal.hpp"
#include "brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{

private:
 Brain *_catBrain;
public:
  Cat ();
  ~Cat ();
  Cat (const Cat &copy);
  Cat &operator= (const Cat &other);
  void makeSound () const;
  Brain* getBrain() const;
};
