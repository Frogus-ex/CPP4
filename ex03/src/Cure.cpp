#include "../include/Cure.hpp"

Cure::Cure () : AMateria ("cure") {}

Cure::~Cure () {}

Cure::Cure (const Cure &copy) : AMateria (copy) { *this = copy; }

Cure &
Cure::operator= (const Cure &other)
{
  AMateria::operator= (other);
  return (*this);
}

Cure *
Cure::clone () const
{
  return (new Cure (*this));
}

void
Cure::use (ICharacter &target)
{
  std::cout << "* heals " << target.getName () << "'s wounds *"
            << "\n";
}
