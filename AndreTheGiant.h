#ifndef ANDRETHEGIANT_H
#define ANDRETHEGIANT_H

#include "GummyBear.h"
#include "Level.h" // Include the header file where Level::displayLevel is declared
#include <string>

class AndreTheGiant : public GummyBear {
public:
    // Constructor
    AndreTheGiant(const std::string& n, int lvl, int hp, int atk, int def, int spd, const std::string& spec);

    // Override the performSpecialAbility method
    void performSpecialAbility(GummyBear& opponent) override;

    // Override the level up method
    void levelUp() override;

    // Override the display stats method
    void displayStats() const override;
};

#endif // ANDRETHEGIANT_H
