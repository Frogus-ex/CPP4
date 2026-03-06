#include "../include/Ice.hpp"

Ice::Ice () : AMateria("ice") {}

Ice::~Ice () {}

Ice::Ice (const Ice &copy) : AMateria(copy)
{ 
  *this = copy;
}

Ice &
Ice::operator= (const Ice &other)
{
  if (this != &other)
    _type = other._type;
  return (*this);
}

std::string const &
Ice::getType () const
{
  return (_type);
}

Ice *
Ice::clone () const
{
  return (new Ice (*this));
}

void
Ice::use (ICharacter &target)
{
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
            << "\n";
}
