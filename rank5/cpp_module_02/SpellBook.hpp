#pragma once
#include <string>
#include <iostream>
#include <ostream>
#include "ASpell.hpp"
#include <map>

class SpellBook {

private:
    std::map<std::string, ASpell*> spells;
    
    SpellBook(const SpellBook&);
    SpellBook &operator=(const SpellBook&);
    
public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell *);
    void forgetSpell(std::string const &);
    ASpell *createSpell(std::string const &);
};
