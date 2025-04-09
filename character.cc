#include "character.h"
using namespace std;

Character::Character(string n, int h, int pa, int ma, int pd, int md) : name(n), health(h), physicalAttack(pa), magicAttack(ma), physicalDefense(pd), magicDefense(md) {}

void Character::takeDamage(int damage) {
    if (damage > 0) {
        health -= damage;
    }
    if (health < 0) {
        health = 0;
    }
}

bool Character::isAlive() const {
    return (health > 0);
}

string Character::getName() const {
    return name;
}

int Character::getHealth() const {
    return health;
}

int Character::getPhysicalDefense() const {
    return physicalDefense;
}

int Character::getMagicDefense() const {
    return magicDefense;
}