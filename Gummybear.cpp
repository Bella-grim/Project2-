#include "GummyBear.h"

// Constructor
GummyBear::GummyBear(const std::string& n, int lvl, int hp, int atk, int def, int spd, const std::string& spec)
    : name(n), level(lvl), health(hp), attack(atk), defense(def), speed(spd), specialAbility(spec) {}

GummyBear::~GummyBear() {}
// Virtual destructor - explicitly defaulted in the header file

// Getters
std::string GummyBear::getName() const { return name; }
int GummyBear::getLevel() const { return level; }
int GummyBear::getHealth() const { return health; }
int GummyBear::getAttack() const { return attack; }
int GummyBear::getDefense() const { return defense; }
int GummyBear::getSpeed() const { return speed; }
std::string GummyBear::getSpecialAbility() const { return specialAbility; }

// Setters
void GummyBear::setHealth(int hp) { health = hp; }
void GummyBear::setAttack(int atk) { attack = atk; }
void GummyBear::setDefense(int def) { defense = def; }
void GummyBear::setSpeed(int spd) { speed = spd; }
void GummyBear::setLevel(int newLevel) {level = newLevel;}

// Level up method
void GummyBear::levelUp() {
    if (level < 5) {  // Assuming max level is 5
        level++;
        health += 10;
        attack += 5;
        defense += 5;
        speed += 2;
        std::cout << name << " has leveled up to level " << level << "!" << std::endl;
    } else {
        std::cout << name << " is already at maximum level!" << std::endl;
    }
}

// Display stats
void GummyBear::displayStats() const {
    std::cout << "Stats for " << name << ":" << std::endl;
    std::cout << "Level: " << level << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Attack: " << attack << std::endl;
    std::cout << "Defense: " << defense << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Special Ability: " << specialAbility << std::endl;
}

// Perform special ability
void GummyBear::performSpecialAbility(GummyBear& target) {
    std::cout << name << " uses " << specialAbility << " on " << target.getName() << std::endl;
    // Implement specific effects in derived classes
}
