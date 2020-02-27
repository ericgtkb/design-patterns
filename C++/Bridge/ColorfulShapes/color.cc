#include <iostream>
#include "color.h"

void RedColor::fill_color() const {
    std::cout << "Filling the space with color red...\n";
}


void GreenColor::fill_color() const {
    std::cout << "Filling the space with color green...\n";
}


void BlueColor::fill_color() const {
    std::cout << "Filling the space with color blue...\n";
}
