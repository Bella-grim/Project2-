#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <limits>
#include "GummyBear.h"
#include "JohnCena.h"
#include "MikeTyson.h"
#include "TheRock.h"
#include "AndreTheGiant.h"
#include "SteveAustin.h"

using namespace std;

void Prize(const string& Name) {
    cout << " ________00000000000___________000000000000________" << endl;
    cout << "  ______00000000_____00000___000000_____0000000______" << endl;
    cout << "  ____0000000_____________000______________00000_____" << endl;
    cout << " ___0000000_______________0_________________0000____" << endl;
    cout << " __000000____________Great Job!______________0000___" << endl;
    cout << " __00000______" << Name << " won the game!_____0000__" << endl;
    cout << "  _00000________Thank You for playing________000000__" << endl;
    cout << "  _00000_____________________________________000000__" << endl;
    cout << "  __000000_________________________________0000000___" << endl;
    cout << "   ___0000000______________________________0000000____" << endl;
    cout << "   _____000000____________________________000000______" << endl;
    cout << "  _______000000________________________000000________" << endl;
    cout << " __________00000_____________________0000___________" << endl;
    cout << "  _____________0000_________________0000_____________" << endl;
    cout << "   _______________0000_____________000________________" << endl;
    cout << "   _________________000_________000___________________" << endl;
    cout << "  _________________ __000_____00_____________________" << endl;
    cout << "  ______________________00__00_______________________" << endl;
}

void WelcomeMenu(const string& Name) {
    cout << "Welcome " << Name << " to the WWE + Mike Tyson Gummy Bear Arena Game!" << endl;
    cout << "First, you will be asked to choose a gummy bear character." << endl;
    cout << "Then you will be asked to choose an opponent." << endl;
    cout << "If you lose, the game will come to an end :( " << endl;
    cout << "If you win, you can level up your character so their actions will be more powerful." << endl;
    cout << "Once you reach the max level of 5, you will have officially won the gummy bear arena game and will be awarded a small prize!" << endl;
    cout << "°°••....••°°..••°°°°••..°°••....••°°..••°°°°••..°°••....••°°..••°°°°••..°°••....••°°..••°°°°••.." << endl;
    cout << endl;
}

void ActionMenu(int level) {
    cout << "Select an action to play against opponent: " << endl;
    cout << "1. Punch (-" << 5 + 5 * (level - 1) << " HP)" << endl;
    cout << "2. Kick (-" << 4 + 5 * (level - 1) << " HP)" << endl;
    cout << "3. Slap (-" << 8 + 5 * (level - 1) << " HP)" << endl;
    cout << "4. Use special ability" << endl;
}

int getRandomAction() {
    return rand() % 4 + 1;  // Generates a random number between 1 and 4
}

int main() {
    srand(static_cast<unsigned int>(time(NULL)));  // Seed the random number generator
    vector<GummyBear*> characters{
        new JohnCena("John Cena", 1, 100, 12, 5, 3, "Invisibility"),
        new MikeTyson("Mike Tyson", 1, 100, 15, 5, 2, "Bite"),
        new SteveAustin("Stone Cold Steve Austin", 1, 100, 10, 5, 4, "Freeze"),
        new TheRock("The Rock", 1, 100, 13, 5, 5, "Rock Throw"),
        new AndreTheGiant("Andre the Giant", 1, 130, 14, 5, 2, "Slam")
    };

    string playerName;
    cout << "Hello, please enter your first name: ";
    cin >> playerName;
    WelcomeMenu(playerName);

    int playerChoice, opponentChoice;
    cout << "Please select a character to play as: " << endl;
    for (int i = 0; i < characters.size(); ++i) {
        cout << i + 1 << ". " << characters[i]->getName() << endl;
    }
    cin >> playerChoice;
    if (playerChoice < 1 || playerChoice > characters.size()) {
        cout << "Invalid choice, exiting game." << endl;
        return 0;
    }

    cout << "Please select a character to play against: ";
    for (int i = 0; i < characters.size(); ++i) {
        if (i + 1 != playerChoice) {
            cout << i + 1 << ". " << characters[i]->getName() << endl;
        }
    }
    cin >> opponentChoice;
    if (opponentChoice < 1 || opponentChoice > characters.size() || opponentChoice == playerChoice) {
        cout << "Invalid or same character selected, exiting game." << endl;
        return 0;
    }

    GummyBear* player = characters[playerChoice - 1];
    GummyBear* opponent = characters[opponentChoice - 1];

    // Game loop starts here
    cout << "•┈••✦ ❤ ✦••┈••┈••✦ ❤ ✦••┈••┈••✦ ❤ ✦••┈••┈••✦ ❤ ✦••┈••┈••✦ ❤ ✦••┈••┈••✦ ❤ ✦••┈••┈••✦ ❤ ✦••┈••┈••✦ ❤ ✦••┈•" << endl;
    while (player->getHealth() > 0 && player->getLevel() < 5) {
        cout << "\nRound starts now!" << endl;
        player->displayStats();
        opponent->displayStats();

        int actionChoice;
        cout << "Your turn. Choose your action:" << endl;
        ActionMenu(player->getLevel());
        cin >> actionChoice;

        // Battle logic to handle the outcome of actions
        // Implement the actions based on the choice
        int damage = 0;
        switch (actionChoice) {
            case 1: // Punch
                damage = 5 + 5 * (player->getLevel() - 1);
                break;
            case 2: // Kick
                damage = 4 + 5 * (player->getLevel() - 1);
                break;
            case 3: // Slap
                damage = 8 + 5 * (player->getLevel() - 1);
                break;
            case 4: // Special ability
                player->performSpecialAbility(*opponent);
                break;
        }
      cout << "•┈••✦ ❤ ✦••┈••┈••✦ ❤ ✦••┈••┈••✦ ❤ ✦••┈••┈••✦ ❤ ✦••┈••┈••✦ ❤ ✦••┈••┈••✦ ❤ ✦••┈••┈••✦ ❤ ✦••┈••┈••✦ ❤ ✦••┈•" << endl;
        if (actionChoice != 4) { // If not using special ability
            opponent->setHealth(opponent->getHealth() - damage);
            cout << "You dealt " << damage << " damage to " << opponent->getName() << "!" << endl;
        }

        if (opponent->getHealth() <= 0) {
            cout << opponent->getName() << " has been defeated!" << endl;
            player->levelUp();
            opponent->levelUp();  // Also level up the opponent for the next round
            cout << "Both characters have leveled up!" << endl;
            if (player->getLevel() == 5) {
                cout << "Congratulations! " << playerName << " has reached level 5 and won the game!" << endl;
                Prize(playerName);
                break;
            } else {
                opponent->setHealth(100); // Reset health or choose new opponent logic
            }
        } else {
            cout << opponent->getName() << " strikes back!" << endl;
            int opponentDamage = getRandomAction() * 5; // Simplified opponent action
            player->setHealth(player->getHealth() - opponentDamage);
            cout << opponent->getName() << " deals " << opponentDamage << " damage to you!" << endl;
        }

        if (player->getHealth() <= 0) {
            cout << "You have been defeated! Game over." << endl;
            break;
        }
    }

    // Clean up dynamically allocated memory
    for (auto& charPtr : characters) {
        delete charPtr;
    }
    characters.clear();

    return 0;
}
