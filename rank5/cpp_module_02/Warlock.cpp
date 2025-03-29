#include "Warlock.hpp"

Warlock::Warlock(const std::string &n, const std::string &t) : name(n), title(t) {
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    std::cout << name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const {
    return name;
}

const std::string &Warlock::getTitle() const {
    return title;
}

void Warlock::setTitle(const std::string&t) {
    title = t;
}

void Warlock::introduce() const {
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl; 
}

void Warlock::learnSpell(ASpell *s) {
    spellBook.learnSpell(s);
}

void Warlock::forgetSpell(std::string s) {
    spellBook.forgetSpell(s);
}

void Warlock::launchSpell(std::string s, ATarget &t) {
    ASpell *spell = spellBook.createSpell(s);
    if (spell)
        spell->launch(t);
}

