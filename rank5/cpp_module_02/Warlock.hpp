#pragma once
#include <string>
#include <iostream>
#include <ostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <map>

class Warlock {

private:
    std::string name;
    std::string title;
    SpellBook spellBook;
    
    Warlock();
    Warlock(const Warlock&);
    Warlock &operator=(const Warlock&);

public:
    Warlock(const std::string &, const std::string &);
    ~Warlock();

    const std::string &getName() const;
    const std::string &getTitle() const;

    void setTitle(const std::string&);
    void introduce() const;

    void learnSpell(ASpell *);
    void forgetSpell(std::string);
    void launchSpell(std::string, ATarget&);
};
