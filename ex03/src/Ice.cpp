#include "../include/Ice.hpp"

Ice::Ice () : AMateria ("ice") {}

Ice::~Ice () {}

Ice::Ice (const Ice &copy) : AMateria (copy) { *this = copy; }

Ice &
Ice::operator= (const Ice &other)
{
  AMateria::operator=(other);
  return (*this);
}

Ice *
Ice::clone () const
{
  return (new Ice (*this));
}

void
Ice::use (ICharacter &target)
{
  std::cout << "* shoots an ice bolt at " << target.getName () << " *"
            << "\n";
}
