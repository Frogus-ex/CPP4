#include "../include/animal.hpp"

Animal::Animal () { std::cout << "Animal default constructor called\n"; }

Animal::Animal (std::string type)
{
  std::cout << "Animal constructor called\n";
  _type = type;
}

Animal::~Animal () { std::cout << "Animal destructor called\n"; }

Animal::Animal (const Animal &copy)
{
  std::cout << "Animal copy assignment called\n";
  *this = copy;
}

Animal &
Animal::operator= (const Animal &other)
{
  std::cout << "Animal operator overload called\n";
  if (this != &other)
    _type = other._type;
  return (*this);
}

std::string
Animal::getType () const
{
  return _type;
}

void
Animal::set_type (std::string type)
{
  _type = type;
}

void
Animal::makeSound () const
{
  std::cout << "...\n";
}


