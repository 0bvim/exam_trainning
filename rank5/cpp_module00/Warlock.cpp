#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::~Warlock(){
	std::cout << _name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

std::string const &Warlock::getName() const { return _name; }

std::string const &Warlock::getTitle() const { return _title; }

void Warlock::setTitle(std::string const &newTitle) { _title = newTitle; }

Warlock::Warlock(Warlock const &rhs) {
	*this = rhs;
}

Warlock &Warlock::operator=(Warlock const &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return *this;
}

void Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}
