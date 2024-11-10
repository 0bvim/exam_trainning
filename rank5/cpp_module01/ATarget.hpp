#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell.hpp

class ATarget {
	private:
		std::string _type;

	public:
		ATarget();
		ATarget(std::string const &type);
		virtual ~ATarget();
		ATarget(ATarget const &rhs);
		ATarget &operator=(ATarget const &rhs);

		std::string const &getType() const;

		virtual ATarget *clone() const = 0;

		void getHitBySpell(ASpell const &spell);
};
