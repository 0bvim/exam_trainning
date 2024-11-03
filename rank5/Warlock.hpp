#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <cstdlib>
#include <string>

class Warlock {
private:
	std::string name;
	std::string title;
	Warlock();
	Warlock(const Warlock &rhs);
	Warlock &operator=(const Warlock &rhs);
public:
	Warlock(const std::string &newName, const std::string &newTitle);
	~Warlock();

	const std::string	&getName() const;
	const std::string	&getTitle() const;

	void	setTitle(const std::string &newTitle);
	void	introduce() const;
};

#endif
