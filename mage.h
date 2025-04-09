#ifndef MAGE_H
#define MAGE_H
#include <string>
#include "character.h"
using namespace std;

class Mage : public Character {
private:
    bool hasTalisman;

public:
    Mage(string name, int health, int pa, int ma, int pd, int md, bool hasTalisman);
    void attack(Character* target) override;
    void takeDamage(int damage) override;
};

#endif