#include "JohnCena.h"
#include <iostream>

// Constructor implementation
JohnCena::JohnCena(const std::string& n, int lvl, int hp, int atk, int def, int spd, const std::string& spec)
    : GummyBear(n, lvl, hp, atk, def, spd, spec) {}

// Specific implementation for John Cena's special ability
void JohnCena::performSpecialAbility(GummyBear& opponent) {
    std::cout << getName() << " becomes invisible and punches " << opponent.getName() << "!" << std::endl;
    opponent.setHealth(opponent.getHealth() - 20);  // John Cena's punch reduces the opponent's health by 20
}

// Override displayStats to use Level::displayLevel for the level display
void JohnCena::displayStats() const {
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

// Level up method implementation
void JohnCena::levelUp() {
    if (getLevel() < 5) {  // Assuming the max level is 5
        setLevel(getLevel() + 1);
        setHealth(getHealth() + 10);  // Increases health by 10
        setAttack(getAttack() + 5);  // Increases attack by 5
        setDefense(getDefense() + 5);  // Increases defense by 5
        setSpeed(getSpeed() + 3);  // Increases speed by 3
        std::cout << getName() << " has leveled up to level " << getLevel() << "!" << std::endl;
    } else {
        std::cout << getName() << " is already at maximum level!" << std::endl;
    }
}
