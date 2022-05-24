#include <stdint.h>
#include <string>
#include <iostream>

class Creature
{
    public:
    Creature(std::string name, int attack, int defense);

    const std::string& name() const { return m_name; };
    int attack() const { return m_attack; };
    int defense() const { return m_defense; };
    private:
    std::string m_name;
    int m_attack;
    int m_defense;
};

Creature::Creature(std::string name, int attack, int defense): m_name{name}, m_attack{attack}, m_defense{defense} {}


int main() {
    Creature manny = Creature{"Manny the Monster", 2, 1};

    std::cout << "Name:    " << manny.name()    << "\n";
    std::cout << "Attack:  " << manny.attack()  << "\n";
    std::cout << "Defense: " << manny.defense() << "\n";

    return 0;
}