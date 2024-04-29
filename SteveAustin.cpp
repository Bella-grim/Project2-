#include "SteveAustin.h"
#include <iostream>

using namespace std;

// Constructor implementation
SteveAustin::SteveAustin(const std::string& n, int lvl, int hp, int atk, int def, int spd, const std::string& spec)
: GummyBear(n, lvl, hp, atk, def, spd, spec) {}

// Specific implementation for Stone Cold's special ability
void SteveAustin::performSpecialAbility(GummyBear& opponent) {
    cout << getName() << " uses his freeze ability and takes 18 HP from " << opponent.getName() << "!" << endl;
    opponent.setHealth(opponent.getHealth() - 18);  // Deals 18 HP damage to the opponent
}

void SteveAustin::levelUp() {
  if (getLevel() < 5) {
    level++;
    health += 8;
    attack += 5;
    defense += 5;
    speed += 3;
    cout << getName() << " has leveled up to level " << getLevel() << "!" << endl;
  } else {
    cout << getName() << " is already at maximum level!" << endl;
  }
}

void SteveAustin::displayStats() const {
    cout << "----------------------------------------" << endl;
    cout << "Stats for " << getName() << ":" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Level: " << Level::displayLevel(getLevel()) << endl;  // Use centralized Level display method
    cout << "Health: " << getHealth() << endl;
    cout << "Attack: " << getAttack() << endl;
    cout << "Defense: " << getDefense() << endl;
    cout << "Speed: " << getSpeed() << endl;
    cout << "Special Ability: " << getSpecialAbility() << endl;
}

