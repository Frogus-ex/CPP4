#pragma once
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria
{
public:
  Ice ();
  ~Ice ();
  Ice (const Ice &copy);
  Ice &operator= (const Ice &other);
  Ice *clone () const;
  void use (ICharacter &target);
};
