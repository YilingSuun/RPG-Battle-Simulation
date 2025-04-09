#include "warrior.h"
using namespace std;

Warrior::Warrior(string n, int h, int pa, int ma, int pd, int md) : Character(n, h, pa, ma, pd, md) {}

void Warrior::attack(Character* target) {
    int damage = physicalAttack - target->getPhysicalDefense();
    target->takeDamage(damage);
}
