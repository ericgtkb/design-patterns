#include <iostream>
#include "player.h"

void Human::set_weapon(const std::string& weapon) {
    this->weapon = weapon;
}

void Human::fight() const {
    std::cout << "I am a human wielding a(n) " << weapon << "! I will defeat you orcs!!!\n";
}


void Orc::set_weapon(const std::string& weapon) {
    this->weapon = weapon;
}

void Orc::fight() const {
    std::cout << "I am an orc wielding a(n) " << weapon << "! I will defeat you humans!!!\n";
}
