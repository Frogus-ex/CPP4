#pragma once
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
protected:
  std::string _type;

public:
  AMateria (std::string const &type);
  virtual ~AMateria ();
  AMateria (const AMateria &copy);
  AMateria &operator= (const AMateria &other);
  std::string const &getType () const;
  virtual AMateria *clone () const = 0;
  virtual void use (ICharacter& target);
};
