#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {

}

TargetGenerator::~TargetGenerator() {

}

void TargetGenerator::learnTargetType(ATarget *s) {
    if (s)
        targets[s->getType()] = s->clone();
}

void TargetGenerator::forgetTargetType(std::string const &t) {
    std::map<std::string, ATarget*>::iterator it = targets.find(t);
    if (it != targets.end()) {
        delete it->second;
        targets.erase(it);
    }
}

ATarget *TargetGenerator::createTarget(std::string const &t) {
    std::map<std::string, ATarget*>::iterator it = targets.find(t);
    if (it != targets.end())
        return it->second->clone();
    return NULL;
}
