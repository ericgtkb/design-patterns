#ifndef COFFEESHOP_CONDIMENT_DECORATOR_H
#define COFFEESHOP_CONDIMENT_DECORATOR_H


#include "beverage.h"

class CondimentDecorator : public Beverage {
public:
    virtual ~CondimentDecorator() = default;
    virtual std::string get_description() const override = 0;
};

class Mocha : public CondimentDecorator {
public:

private:
public:
    Mocha(Beverage& beverage);
    double cost() override;
    std::string get_description() const override;

private:
    Beverage& beverage;
};

class Soy : public CondimentDecorator {
public:

private:
public:
    Soy(Beverage& beverage);
    double cost() override;
    std::string get_description() const override;

private:
    Beverage& beverage;
};


#endif //COFFEESHOP_CONDIMENT_DECORATOR_H
