#include <iostream>
#include "duck_behaviors.h"

void FlyWithWings::fly() {
    std::cout << "I have wings and I am flying high!!!\n";
}

void FlyNoWay::fly() {
    std::cout << "I don't have wings... I can't fly...\n";
}

void Quack::quack() {
    std::cout << "Quack!!!\n";
}

void MuteQuack::quack() {
    std::cout << "...\n";
}

void Squeak::quack() {
    std::cout << "Squeak!!!\n";
}
