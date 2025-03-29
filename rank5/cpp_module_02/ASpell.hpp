#pragma once
#include <string>
#include <iostream>
#include <ostream>

class ATarget;

class ASpell {

protected:
    std::string name;
    std::string effects;
    ASpell();
    
public:
    ASpell(const ASpell&);
    ASpell &operator=(const ASpell&);
    ASpell(const std::string &, const std::string &);
    virtual ~ASpell();

    std::string getName() const;
    std::string getEffects() const;

    virtual ASpell *clone() const = 0;
    void launch(const ATarget &) const;
};

#include "ATarget.hpp"
