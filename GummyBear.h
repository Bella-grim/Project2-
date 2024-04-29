#ifndef GUMMYBEAR_H
#define GUMMYBEAR_H

#include <string>
#include <iostream>

class GummyBear {
protected:
    std::string name;
    int level;
    int health;
    int attack;
    int defense;
    int speed;
    std::string specialAbility;

public:
    // Constructor
    GummyBear(const std::string& n, int lvl, int hp, int atk, int def, int spd, const std::string& spec);

    // Virtual destructor
    virtual ~GummyBear();

    // Getters
    std::string getName() const;
    int getLevel() const;
    int getHealth() const;
    int getAttack() const;
    int getDefense() const;
    int getSpeed() const;
    std::string getSpecialAbility() const;

    // Setters
    void setHealth(int hp);
    void setAttack(int atk);
    void setDefense(int def);
    void setSpeed(int spd);
    void setLevel(int lvl);

    // Virtual methods for level-up, stats display, and special abilities
    virtual void levelUp();
    virtual void displayStats() const;
    virtual void performSpecialAbility(GummyBear& target) = 0;  // Pure virtual function
};

#endif // GUMMYBEAR_H
