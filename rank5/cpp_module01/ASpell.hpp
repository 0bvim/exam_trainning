#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>

class ASpell {
protected:
  std::string name;
  std::string effects;

public:
  ASpell(const std::string &newName, const std::string &newEffect);
  virtual ~ASpell();
  ASpell(const ASpell &rhs);
  ASpell &operator=(const ASpell &rhs);

  std::string const &getName();
  std::string const &getEffects();

  virtual ASpell *clone() const = 0;
};

#endif
