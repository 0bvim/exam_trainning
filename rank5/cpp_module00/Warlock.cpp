#include "Warlock.hpp"
#include <cstdlib>
#include <iostream>

Warlock::Warlock(const std::string &newName, const std::string &newTitle)
    : name(newName), title(newTitle) {
  if (name.empty() || title.empty()) {
    std::cerr << "Sorry, you can't instatiate with empty params" << std::endl;
    exit(1);
  }
  std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
  std::cout << name << ": My job here is done!" << std::endl;
}

Warlock &Warlock::operator=(const Warlock &rhs) {
  if (this != &rhs) {
    this->name = rhs.name;
    this->title = rhs.title;
  }
  return *this;
}

Warlock::Warlock(const Warlock &rhs) { *this = rhs; }

const std::string &Warlock::getName() const { return this->name; }

const std::string &Warlock::getTitle() const { return this->title; }

void Warlock::setTitle(const std::string &newTitle) { this->title = newTitle; }

void Warlock::introduce() const {
  std::cout << this->name << ": I am " << this->name << ", " << this->title
            << "!" << std::endl;
}
