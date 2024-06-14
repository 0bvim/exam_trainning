#include "ASpell.hpp"
#include "ATarget.hpp"
#include <iostream>

int main() {
  // Create an ASpell object
  ASpell fireball("Fireball", "burnt badly");

  // Create an ATarget object
  ATarget dummy("Inanimate Object");

  // Test getHitBySpell with the ASpell object
  dummy.getHitBySpell(fireball);

  // Create another ATarget object (copy constructor)
  ATarget anotherDummy(dummy);

  // Test getHitBySpell with the copied target
  anotherDummy.getHitBySpell(fireball);

  return 0;
}

