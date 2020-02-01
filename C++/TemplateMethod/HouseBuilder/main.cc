#include <iostream>
#include <memory>
#include "house.h"

int main() {
    std::unique_ptr<House> house {std::make_unique<WoodenHouse>()};
    house->build_house();
    std::cout << std::string(40, '=') << '\n';
    house = std::make_unique<GlassHouse>();
    house->build_house();

    return 0;
}
