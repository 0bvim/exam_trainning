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
