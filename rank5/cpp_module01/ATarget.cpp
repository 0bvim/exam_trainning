#include "ATarget.hpp"
#include "ASpell.hpp"
#include "iostream"

ATarget::ATarget(const std::string &newType) : type(newType) {}
ATarget::~ATarget() {}

ATarget::ATarget(const ATarget &rhs) { *this = rhs; }

ATarget &ATarget::operator=(ATarget const &rhs) {
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

std::string const &ATarget::getType() { return this->type; }

void ATarget::getHitBySpell(ASpell const &spell) const {
  std::cout << this->getType() << " has been " << spell.getEffects() << "!"
            << std::endl;
}
