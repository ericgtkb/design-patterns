#ifndef COFFEESHOP_BEVERAGE_H
#define COFFEESHOP_BEVERAGE_H


#include <string>

class Beverage {
public:
    virtual ~Beverage() = default;
    virtual std::string get_description() const;
    virtual double cost() = 0;
    void beverage_summary();

protected:
    std::string description {"Unknown Beverage"};

};

class Espresso : public Beverage {
public:
    Espresso();
    double cost() override;
};


class HouseBlend : public Beverage {
public:
    HouseBlend();
    double cost() override;
};

#endif //COFFEESHOP_BEVERAGE_H
