#include "../include/cat.hpp"

Cat::Cat ()
{
  std::cout << "Cat default constructor called\n";
  _type = "Cat";
}

Cat::~Cat () { std::cout << "Cat destructor called\n"; }

Cat::Cat (const Cat &copy)
{
  std::cout << "Cat copy assignment called\n";
  *this = copy;
}

Cat &
Cat::operator= (const Cat &other)
{
  std::cout << "Cat operator overload called\n";
  if (this != &other)
    _type = other._type;
  return (*this);
}

void
Cat::makeSound () const
{
  std::cout << "MEEEEOOOOOOW !\n";
}
