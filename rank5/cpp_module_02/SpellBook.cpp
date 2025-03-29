#include "SpellBook.hpp"

SpellBook::SpellBook() {

}

SpellBook::~SpellBook() {

}

void SpellBook::learnSpell(ASpell *s) {
    if (s)
        spells[s->getName()] = s->clone();
}

void SpellBook::forgetSpell(std::string const &s) {
    std::map<std::string, ASpell*>::iterator it = spells.find(s);
    if (it != spells.end()) {
        delete it->second;
        spells.erase(it);
    }
}

ASpell *SpellBook::createSpell(std::string const &s) {
    std::map<std::string, ASpell*>::iterator it = spells.find(s);
    if (it != spells.end())
        return it->second->clone();
    return NULL;
}
