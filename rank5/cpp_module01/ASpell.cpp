#include "ASpell.hpp"

ASpell::ASpell(ASpell const &rhs) {
	*this = rhs;
}

ASpell &ASpell::operator=(ASpell const &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_effects = rhs._effects;
	}
	return *this;
}

ASpell::ASpell(){}

ASpell::~ASpell(){}

ASpell::ASpell(std::string const &name, std::string const &effects) : _name(name), _effects(effects) {}

std::string const &ASpell::getName() const { return _name; }

std::string const &ASpell::getEffects() const { return _effects; }

void ASpell::launch(ATarget const &target) {
	target.getHitBySpell(*this);
}
