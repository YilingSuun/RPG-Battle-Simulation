#include <iostream>
#include <new>
#include "warrior.h"
#include "mage.h"
#include "archer.h"

int main() {

    // Create the first character (Warrior, Mage, or Archer)
    std::cout << "Create your first character:" << std::endl;
    std::cout << "Enter type (Warrior/Mage/Archer): ";
    std::string type, name;

    std::cin >> type;
    std::cout << "Enter name: ";
    std::cin >> name;

    Character* character1 = nullptr;
    if (type == "Warrior") {
        character1 = new (std::nothrow) Warrior(name, 100, 20, 5, 10, 5);
    } else if (type == "Mage") {
        std::cout << "Does the Mage have a talisman? (yes/no): ";
        std::string talismanInput;
        std::cin >> talismanInput;
        character1 = new (std::nothrow) Mage(name, 80, 10, 30, 5, 10, talismanInput == "yes");
    } else if (type == "Archer") {
        character1 = new (std::nothrow) Archer(name, 90, 25, 0, 10, 5);
    }
    
    if (!character1) return -1;

    // Create the second character (Warrior, Mage, or Archer)
    std::cout << "Create your second character:" << std::endl;
    std::cout << "Enter type (Warrior/Mage/Archer): ";
    std::cin >> type;
    std::cout << "Enter name: ";
    std::cin >> name;

    Character* character2 = nullptr;
    if (type == "Warrior") {
        character2 = new (std::nothrow) Warrior(name, 100, 20, 5, 10, 5);
    } else if (type == "Mage") {
        std::cout << "Does the Mage have a talisman? (yes/no): ";
        std::string talismanInput;
        std::cin >> talismanInput;
        character2 = new (std::nothrow) Mage(name, 80, 10, 30, 5, 10, talismanInput == "yes");
    } else if (type == "Archer") {
        character2 = new (std::nothrow) Archer(name, 90, 25, 0, 10, 5);
    }

    if (!character2) return -1;

    std::cout << "Battle begins between " << character1->getName() << " and " << character2->getName() << "!" << std::endl;

    while (character1->isAlive() && character2->isAlive()) {
        // Character 1 attacks and display the result
        character1->attack(character2);
        std::cout << character1->getName() << " attacks " << character2->getName() << "." << std::endl;
        std::cout << character2->getName() << " has " << character2->getHealth() << " health remaining." << std::endl;

        if (character2->isAlive()) {
            // Character 2 attacks and display the result
            character2->attack(character1);
            std::cout << character2->getName() << " attacks " << character1->getName() << "." << std::endl;
            std::cout << character1->getName() << " has " << character1->getHealth() << " health remaining." << std::endl;
        }
    }

    if (!character1->isAlive()) {
        std::cout << character1->getName() << " has been defeated!" << std::endl;
    } else if (!character2->isAlive()) {
        std::cout << character2->getName() << " has been defeated!" << std::endl;
    }

    delete character1;
    delete character2;

    return 0;
}
