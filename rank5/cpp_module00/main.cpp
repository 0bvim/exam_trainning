#include "Warlock.hpp"
#include <iostream>
#include <cstdlib>

int main()
{
    {
        std::cout << "My MAIN\n";
        Warlock const richard("Richard", "Mistress of Magma");
        richard.introduce();
        std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

        Warlock* jack = new Warlock("Jack", "the Long");
        jack->introduce();
        jack->setTitle("the Mighty");
        jack->introduce();

        delete jack;
    }
    {
        std::cout << "\nTESTER MAIN\n";

        std::string lol;
        Warlock const richard("Richard", "Mistress of Magma");
        richard.introduce();
        std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

        Warlock* jack = new Warlock("Jack", "the Long");
        jack->introduce();
        jack->setTitle("the Mighty");
        jack->introduce();

        if (jack->getName() == "Jack")
            std::cout << "getName is const" << std::endl;

        delete jack;
    }

  return (0);
}
