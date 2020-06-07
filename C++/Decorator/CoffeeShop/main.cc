#include "beverage.h"
#include "condiment_decorator.h"

int main() {

    Beverage& mocha_espresso = *new Mocha(*new Espresso());
    mocha_espresso.beverage_summary();

    Beverage& soy_mocha_house_blend = *new Soy(*new Mocha(*new HouseBlend()));
    soy_mocha_house_blend.beverage_summary();

    Beverage& mocha_soy_mocha_house_blend = *new Mocha(soy_mocha_house_blend);
    mocha_soy_mocha_house_blend.beverage_summary();

    return 0;
}