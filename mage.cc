#include "mage.h"
using namespace std;

Mage::Mage(string n, int h, int pa, int ma, int pd, int md, bool hT) : Character(n, h, pa, ma, pd, md), hasTalisman(hT) {}

void Mage::attack(Character* target) {
    int damage = magicAttack - target->getMagicDefense();
    target->takeDamage(damage);
} 

void Mage::takeDamage(int damage) {
    if (hasTalisman) {
        if (damage >= 10) {
            health = health - (damage - 10);
        }
    } else if (damage > 0) {
        health -= damage;
    }
    if (health < 0) {
        health = 0;
    }
}