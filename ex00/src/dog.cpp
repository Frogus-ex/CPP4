#include "../include/dog.hpp"

Dog::Dog ()
{
  std::cout << "Dog default constructor called\n";
  _type = "Dog";
}

Dog::~Dog () { std::cout << "Dog destructor called\n"; }

Dog::Dog (const Dog &copy)
{
  std::cout << "Dog copy assignment called\n";
  *this = copy;
}

Dog &
Dog::operator= (const Dog &other)
{
  std::cout << "Dog operator overload called\n";
  if (this != &other)
    _type = other._type;
  return (*this);
}

void
Dog::makeSound () const
{
  std::cout << "WOOOOOOOOF !\n";
}
