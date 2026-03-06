#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal () { std::cout << "WrongAnimal default constructor called\n"; }

WrongAnimal::WrongAnimal (std::string type)
{
  std::cout << "WrongAnimal constructor called\n";
  _type = type;
}

WrongAnimal::~WrongAnimal () { std::cout << "WrongAnimal destructor called\n"; }

WrongAnimal::WrongAnimal (const WrongAnimal &copy)
{
  std::cout << "WrongAnimal copy assignment called\n";
  *this = copy;
}

WrongAnimal &
WrongAnimal::operator= (const WrongAnimal &other)
{
  std::cout << "WrongAnimal operator overload called\n";
  if (this != &other)
    _type = other._type;
  return (*this);
}

std::string
WrongAnimal::getType () const
{
  return _type;
}

void
WrongAnimal::set_type (std::string type)
{
  _type = type;
}

void
WrongAnimal::makeSound () const
{
  std::cout << "ZGLURBLUX\n";
}
