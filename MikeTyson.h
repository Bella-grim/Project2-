#ifndef MIKETYSON_H
#define MIKETYSON_H

#include "GummyBear.h"
#include "Level.h" // Include Level for displaying levels in stars
#include <string>

class MikeTyson : public GummyBear {
public:
    // Constructor
    MikeTyson(const std::string& n, int lvl, int hp, int atk, int def, int spd, const std::string& spec);

    // Override the performSpecialAbility method to specifically handle his bite
    void performSpecialAbility(GummyBear& opponent) override;
    void levelUp() override;
    void displayStats() const override;
};

#endif // MIKETYSON_H
