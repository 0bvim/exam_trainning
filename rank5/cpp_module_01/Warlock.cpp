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
    if (s)
        spells[s->getName()] = s->clone();
}

void Warlock::forgetSpell(std::string s) {
    std::map<std::string, ASpell*>::iterator it = spells.find(s);
    if (it != spells.end()) {
        delete it->second;
        spells.erase(it);
    }
}

void Warlock::launchSpell(std::string s, ATarget &t) {
    std::map<std::string, ASpell*>::iterator it = spells.find(s);
    if (it != spells.end())
        it->second->launch(t);
}

