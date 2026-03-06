#include "../include/Amateria.hpp"

AMateria::AMateria (std::string const &type) : _type (type) {}

AMateria::~AMateria () {}

AMateria::AMateria (const AMateria &copy) { *this = copy; }

AMateria &
AMateria::operator= (const AMateria &other)
{
  if (this != &other)
    _type = other._type;
  return (*this);
}

std::string const &
AMateria::getType () const
{
  return (_type);
}

AMateria *
AMateria::clone () const
{
  return (NULL);
}

void
AMateria::use (ICharacter &target)
{
  (void)target;
}
