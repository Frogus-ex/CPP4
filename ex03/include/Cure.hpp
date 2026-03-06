#pragma once
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
public:
  Cure ();
  ~Cure ();
  Cure (const Cure &copy);
  Cure &operator= (const Cure &other);
  Cure *clone () const;
  void use (ICharacter &target);
};
