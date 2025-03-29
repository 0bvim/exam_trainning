#pragma once
#include <string>
#include <iostream>
#include <ostream>
#include "ATarget.hpp"
#include <map>

class TargetGenerator {

private:
    std::map<std::string, ATarget*> targets;
    
    TargetGenerator(const TargetGenerator&);
    TargetGenerator &operator=(const TargetGenerator&);
    
public:
    TargetGenerator();
    ~TargetGenerator();

    void learnTargetType(ATarget*);
    void forgetTargetType(std::string const &);
    ATarget *createTarget(std::string const &);
};
