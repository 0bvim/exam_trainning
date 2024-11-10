#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::~ATarget(){}

ATarget::ATarget(std::string const &type) : _type(type) {}

ATarget::ATarget(ATarget const &rhs) {
	*this = rhs;
}

ATarget &ATarget::operator=(ATarget const &rhs) {
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

std::string const &ATarget::getType() const { return _type; }

void ATarget::getHitBySpell(ASpell const &spell) {
	std::cout << _type << " has been " << spell.getEffects << std::endl;
}
