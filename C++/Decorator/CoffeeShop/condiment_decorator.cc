#include "condiment_decorator.h"

Mocha::Mocha(Beverage& beverage) : beverage(beverage) {}

std::string Mocha::get_description() const {
    return "Mocha" + beverage.get_description();
}

double Mocha::cost() {
    return beverage.cost() + 0.33;
}

Soy::Soy(Beverage& beverage) : beverage(beverage) {

}


std::string Soy::get_description() const {
    return "Soy " + beverage.get_description();
}

double Soy::cost() {
    return beverage.cost() + 0.50;
}