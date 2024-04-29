#ifndef JOHNCENA_H
#define JOHNCENA_H

#include "GummyBear.h"
#include "Level.h"  // Include the Level class for displaying level in stars
#include <string>

class JohnCena : public GummyBear {
public:
    // Constructor
    JohnCena(const std::string& n, int lvl, int hp, int atk, int def, int spd, const std::string& spec);

    // Override the performSpecialAbility method to specifically handle his invisibility and punching
    void performSpecialAbility(GummyBear& opponent) override;

    // Display stats
    void displayStats() const override;

    // Level up method
    void levelUp() override;
};

#endif // JOHNCENA_H
