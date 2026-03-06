#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{

protected:
  std::string _type;

public:
  WrongAnimal ();
  WrongAnimal (std::string type);
  ~WrongAnimal ();
  WrongAnimal (const WrongAnimal &copy);
  WrongAnimal &operator= (const WrongAnimal &other);
  std::string getType () const;
  void set_type (std::string type);
  void makeSound () const;
};
