#include "AndreTheGiant.h"
#include <iostream>

// Constructor implementation
AndreTheGiant::AndreTheGiant(const std::string& n, int lvl, int hp, int atk, int def, int spd, const std::string& spec)
    : GummyBear(n, lvl, hp, atk, def, spd, spec) {}

// Implementation of the special ability method
void AndreTheGiant::performSpecialAbility(GummyBear& opponent) {
    std::cout << getName() << " uses his almighty slam and takes 17 HP from " << opponent.getName() << "!" << std::endl;
    opponent.setHealth(opponent.getHealth() - 40);  // Deals 17 HP damage to the opponent
}

// Implementation of the level up method
void AndreTheGiant::levelUp() {
    if (getLevel() < 5) {
        setLevel(getLevel() + 1);
        setHealth(getHealth() + 20);
        setAttack(getAttack() + 5);
        setDefense(getDefense() + 5);
        setSpeed(getSpeed() + 1);
        std::cout << getName() << " has leveled up to level " << getLevel() << "!" << std::endl;
    } else {
        std::cout << getName() << " is already at maximum level!" << std::endl;
    }
}

// Implementation of the display stats method
void AndreTheGiant::displayStats() const {
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Stats for " << getName() << ":" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Level: " << Level::displayLevel(getLevel()) << std::endl;
    std::cout << "Health: " << getHealth() << std::endl;
    std::cout << "Attack: " << getAttack() << std::endl;
    std::cout << "Defense: " << getDefense() << std::endl;
    std::cout << "Speed: " << getSpeed() << std::endl;
    std::cout << "Special Ability: " << getSpecialAbility() << std::endl;
    std::cout << std::endl;
}
