#include "MikeTyson.h"
#include <iostream>

using namespace std;

// Constructor implementation
MikeTyson::MikeTyson(const std::string& n, int lvl, int hp, int atk, int def, int spd, const std::string& spec)
: GummyBear(n, lvl, hp, atk, def, spd, spec) {}

// Specific implementation for Mike Tyson's special ability
void MikeTyson::performSpecialAbility(GummyBear& opponent) {
    cout << getName() << " bites " << opponent.getName() << "'s ear, dealing 20 HP damage!" << endl;
    opponent.setHealth(opponent.getHealth() - 20);  // Deals 20 HP damage to the opponent
}

void MikeTyson::levelUp() {
    if (getLevel() < 5) {  // Assuming 5 is the maximum level
        level++;
        health += 10;
        attack += 5;
        defense += 5;
        speed += 2;
        cout << getName() << " has leveled up to level " << getLevel() << "!" << endl;
    } else {
        cout << getName() << " is already at maximum level!" << endl;
    }
}

// Override to display Mike Tyson's stats using the centralized display method
void MikeTyson::displayStats() const {
    cout << "----------------------------------------" << endl;
    cout << "Stats for " << getName() << ":" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Level: " << Level::displayLevel(getLevel()) << endl;
    cout << "Health: " << getHealth() << endl;
    cout << "Attack: " << getAttack() << endl;
    cout << "Defense: " << getDefense() << endl;
    cout << "Speed: " << getSpeed() << endl;
    cout << "Special Ability: " << getSpecialAbility() << endl;
    cout << endl;
}
