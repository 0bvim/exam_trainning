#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>

class ASpell;

class ATarget {
private:
  std::string type;

public:
  ATarget(const std::string &newType);
  ~ATarget();
  ATarget(const ATarget &rhs);
  ATarget &operator=(const ATarget &rhs);

  std::string const &getType();
  void getHitBySpell(const ASpell &spell);

  virtual ATarget clone() const = 0;
};

#endif
