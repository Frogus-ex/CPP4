#pragma once
#include <iostream>
#include <string>

class wrongAnimal
{

protected:
  std::string _type;

public:
  wrongAnimal ();
  wrongAnimal (std::string type);
  ~wrongAnimal ();
  wrongAnimal (const wrongAnimal &copy);
  wrongAnimal &operator= (const wrongAnimal &other);
  std::string getType () const;
  void set_type (std::string type);
  void makeSound () const;
};
