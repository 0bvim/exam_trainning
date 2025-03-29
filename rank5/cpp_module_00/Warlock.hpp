#pragma once
#include <string>
#include <iostream>
#include <ostream>

class Warlock {

private:
    std::string name;
    std::string title;
    Warlock();
    Warlock(const Warlock&);
    Warlock &operator=(const Warlock&);

public:
    Warlock(const std::string &, const std::string &);
    ~Warlock();

    const std::string &getName() const;
    const std::string &getTitle() const;

    void setTitle(const std::string&);
    void introduce() const;
};
