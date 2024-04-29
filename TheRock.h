#ifndef THEROCK_H
#define THEROCK_H

#include "GummyBear.h"
#include "Level.h" // Include Level for displaying levels in stars
#include <string>

class TheRock : public GummyBear {
public:
    // Constructor
    TheRock(const std::string& n, int lvl, int hp, int atk, int def, int spd, const std::string& spec);

    // Override the performSpecialAbility method to handle his rock throwing ability
    void performSpecialAbility(GummyBear& opponent) override;
    void levelUp() override;
    void displayStats() const override;
};

#endif // THEROCK_H
