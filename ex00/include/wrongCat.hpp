#pragma once
#include "wrongAnimal.hpp"
#include <iostream>
#include <string>

class wrongCat : public wrongAnimal
{

private:
public:
  wrongCat ();
  ~wrongCat ();
  wrongCat (const wrongCat &copy);
  wrongCat &operator= (const wrongCat &other);
  void makeSound () const;
};
