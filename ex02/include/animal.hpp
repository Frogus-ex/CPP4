#pragma once
#include <iostream>
#include <string>

class Animal
{

protected:
  std::string _type;

public:
  Animal ();
  Animal (std::string type);
  virtual ~Animal ();
  Animal (const Animal &copy);
  Animal &operator= (const Animal &other);
  virtual std::string getType () const;
  void set_type (std::string type);
  virtual void makeSound () const = 0;
};
