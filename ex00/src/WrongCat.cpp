#include "../include/WrongCat.hpp"

WrongCat::WrongCat ()
{
  std::cout << "WrongCat default constructor called\n";
  _type = "Cat";
}

WrongCat::~WrongCat () { std::cout << "WrongCat destructor called\n"; }

WrongCat::WrongCat (const WrongCat &copy)
{
  std::cout << "WrongCat copy assignment called\n";
  *this = copy;
}

WrongCat &
WrongCat::operator= (const WrongCat &other)
{
  std::cout << "WrongCat operator overload called\n";
  if (this != &other)
    _type = other._type;
  return (*this);
}

void
WrongCat::makeSound () const
{
  std::cout << "BARK !\n";
}
