#pragma once
#include "IMateria.hpp"

class MateriaSource : public IMateriaSource 
{
    private:
    AMateria *_slot[4];
    public :
    MateriaSource() ;
    ~MateriaSource() ;
    MateriaSource (const MateriaSource &copy);
    MateriaSource &operator=(const MateriaSource &other);
    void learnMateria(AMateria*);
    AMateria *createMateria(std::string const & type);
};
