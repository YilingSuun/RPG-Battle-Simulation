#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
using namespace std;

class Character{
protected:
    string name;
    int health;
    int physicalAttack;
    int magicAttack;
    int physicalDefense;
    int magicDefense;

public:
    Character(string name, int health, int pa, int ma, int pd, int md);
    virtual void attack(Character* target) = 0;    // Logic for calculating raw damage.
    virtual void takeDamage(int damage);    // Logic for taking damage from health; only called inside attack functions.
    bool isAlive() const;   // Returns true if the character's health is greater than zero.
    string getName() const;
    int getHealth() const;
    int getPhysicalDefense() const;    //Returns the physical defense of the character.
    int getMagicDefense() const;    // Returns the magic defense of the character.
    virtual ~Character() {};
};

#endif
