#include "../include/wrongCat.hpp"

wrongCat::wrongCat ()
{
  std::cout << "wrongCat default constructor called\n";
  _type = "Cat";
}

wrongCat::~wrongCat () { std::cout << "wrongCat destructor called\n"; }

wrongCat::wrongCat (const wrongCat &copy)
{
  std::cout << "wrongCat copy assignment called\n";
  *this = copy;
}

wrongCat &
wrongCat::operator= (const wrongCat &other)
{
  std::cout << "wrongCat operator overload called\n";
  if (this != &other)
    _type = other._type;
  return (*this);
}

void
wrongCat::makeSound () const
{
  std::cout << "BARK !\n";
}
