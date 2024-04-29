#include "TheRock.h"
#include <iostream>

using namespace std;

// Constructor implementation
TheRock::TheRock(const std::string& n, int lvl, int hp, int atk, int def, int spd, const std::string& spec)
: GummyBear(n, lvl, hp, atk, def, spd, spec) {}

// Specific implementation for The Rock's special ability
void TheRock::performSpecialAbility(GummyBear& opponent) {
    cout << getName() << " throws a rock at " << opponent.getName() << " and takes 20 HP!" << endl;
    opponent.setHealth(opponent.getHealth() - 20);  // Deals 20 HP damage to the opponent
}

void TheRock::levelUp() {
  if (getLevel() < 5) {
    level++;
    health += 10;
    attack += 5;
    defense += 5;
    speed += 3;
    cout << getName() << " has leveled up to level " << getLevel() << "!" << endl;
  } else {
    cout << getName() << " is already at maximum level!" << endl;
  }
}

void TheRock::displayStats() const {
  cout << "----------------------------------------" << endl;
  cout << "Stats for " << getName() << ":" << endl;
  cout << "----------------------------------------" << endl;
  cout << "Name: " << getName() << endl;
  cout << "Level: " << Level::displayLevel(getLevel()) << endl;  // Use Level class to display stars
  cout << "Health: " << getHealth() << endl;
  cout << "Attack: " << getAttack() << endl;
  cout << "Defense: " << getDefense() << endl;
  cout << "Speed: " << getSpeed() << endl;
  cout << "Special Ability: " << getSpecialAbility() << endl;
  cout << endl;
}
