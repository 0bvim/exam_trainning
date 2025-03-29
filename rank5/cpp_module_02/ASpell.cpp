#include "ASpell.hpp"

ASpell::ASpell(const std::string &n, const std::string &e) : name(n), effects(e) {

}

ASpell::~ASpell() {

}

std::string ASpell::getName() const {
    return name;
}

std::string ASpell::getEffects() const {
    return effects;
}

void ASpell::launch(const ATarget &t) const {
    t.getHitBySpell(*this);
}

ASpell::ASpell(const ASpell &c) {
    *this = c;    
}

ASpell::ASpell &operator=(const ASpell &c) {
    if (this != &c) {
        this->name = c.name;
        this->effects = c.effects;
    }

    return *this;
}

