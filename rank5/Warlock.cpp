#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(const Warlock &rhs) {
	*this = rhs;
}

Warlock	&Warlock::operator=(const Warlock &rhs) {
	if (this != &rhs) {
		this->name = rhs.name;
		this->title = rhs.title;
	}
	return *this;
}

Warlock::Warlock(const std::string &newName, const std::string &newTitle) : name(newName), title(newTitle) {
	if (name.empty() || title.empty()) {
		std::cerr << "Params can't be empty" << std::endl;
	}
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const {
	return this->name;
} 

const std::string &Warlock::getTitle() const {
	return this->title;
} 

void	Warlock::setTitle(const std::string &newTitle) {
	this->title = newTitle;
}

void	Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}
