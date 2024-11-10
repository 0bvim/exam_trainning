#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget.hpp

class ASpell {
	protected:
		std::string _name;
		std::string _effects;

	public:
		ASpell();
		ASpell(std::string const &name, std::string const &effects);
		virtual ~ASpell();
		ASpell(ASpell const &rhs);
		ASpell &operator=(ASpell const &rhs);

		std::string getName() const;
		std::string getEffects() const;

		virtual ASpell *clone() const = 0;
		void launch(ATarget const &target);
};
