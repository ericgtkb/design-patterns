#include <iostream>
#include <iomanip>
#include "beverage.h"

std::string Beverage::get_description() const {
    return description;
}

void Beverage::beverage_summary() {
    std::cout << "This is a(n) " << get_description() << ". The total cost is "
              << std::fixed << std::setprecision(2) << cost() << ".\n";

}

Espresso::Espresso() {
    description = "Espresso";
}

double Espresso::cost() {
    return 2.25;
}

HouseBlend::HouseBlend() {
    description = "House Blend Coffee";
}

double HouseBlend::cost() {
    return 2.93;
}
