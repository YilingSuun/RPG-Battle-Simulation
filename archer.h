#ifndef ARCHER_H
#define ARCHER_H
#include <string>
#include "character.h"
using namespace std;

class Archer : public Character {
public:
    Archer(string name, int health, int pa, int ma, int pd, int md);
    void attack(Character* target) override;
};

#endif
