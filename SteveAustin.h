#ifndef STEVEAUSTIN_H
#define STEVEAUSTIN_H

#include "GummyBear.h"
#include "Level.h"  // Include Level for displaying levels in stars
#include <string>

class SteveAustin : public GummyBear {
public:
    // Constructor
    SteveAustin(const std::string& n, int lvl, int hp, int atk, int def, int spd, const std::string& spec);

    // Override the performSpecialAbility method to handle his freeze ability
    void performSpecialAbility(GummyBear& opponent) override;
    void displayStats() const override;
    void levelUp() override;
};

#endif // STEVEAUSTIN_H
