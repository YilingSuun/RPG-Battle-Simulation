#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>
#include "character.h"
using namespace std;

class Warrior : public Character{
public:
    Warrior(string name, int health, int pa, int ma, int pd, int md);
    void attack(Character* target) override;
};

#endif 