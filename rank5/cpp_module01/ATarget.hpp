#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>

class ASpell;

class ATarget {
private:
  std::string type;

public:
  ATarget(const std::string &newType);
  virtual ~ATarget();
  ATarget(const ATarget &rhs);
  ATarget &operator=(const ATarget &rhs);

  std::string const &getType();
  void getHitBySpell(ASpell const &spell) const;

  virtual ATarget clone() const = 0;
};

#endif
