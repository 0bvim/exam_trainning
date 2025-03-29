#include "ATarget.hpp"

ATarget::ATarget(const std::string &t) : type(t) {

}

ATarget::~ATarget() {

}

const std::string &ATarget::getType() const {
    return type;
}

void ATarget::getHitBySpell(const ASpell &s) const {
    std::cout << this->type << " has been " << s.getEffects() << "!" << std::endl;
}

ATarget::ATarget(const ATarget &c) {
    *this = c;    
}

ATarget::ATarget &operator=(const ATarget &c) {
    if (this != &c)
        this->type = c.type;

    return *this;
}