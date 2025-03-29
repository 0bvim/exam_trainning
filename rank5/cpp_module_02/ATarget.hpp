#pragma once
#include <string>
#include <iostream>
#include <ostream>

class ASpell;

class ATarget {

protected:
    std::string type;
    ATarget();
    
public:
    ATarget(const ATarget&);
    ATarget &operator=(const ATarget&);
    ATarget(const std::string &);
    virtual ~ATarget();

    const std::string &getType() const;

    virtual ATarget *clone() const = 0;
    void getHitBySpell(const ASpell &) const;
};

#include "ASpell.hpp"
