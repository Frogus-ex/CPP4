#pragma once
#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal
{

private:
public:
  WrongCat ();
  ~WrongCat ();
  WrongCat (const WrongCat &copy);
  WrongCat &operator= (const WrongCat &other);
  void makeSound () const;
};
