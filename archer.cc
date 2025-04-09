#include "archer.h"
using namespace std;

Archer::Archer(string n, int h, int pa, int ma, int pd, int md):Character(n, h, pa, ma, pd, md) {}

void Archer::attack(Character* target) {
    int damage = physicalAttack + 5 - target->getPhysicalDefense();
    target->takeDamage(damage);
}