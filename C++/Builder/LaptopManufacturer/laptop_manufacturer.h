#ifndef LAPTOPMANUFACTURER_LAPTOP_MANUFACTURER_H
#define LAPTOPMANUFACTURER_LAPTOP_MANUFACTURER_H


#include "laptop_builder.h"

class LaptopManufacturer {
public:
    LaptopManufacturer(LaptopBuilder *builder);
    void set_builder(LaptopBuilder *builder);
    void build_laptop();
    std::unique_ptr<Laptop> deliver_laptop();

private:
    LaptopBuilder* _builder;

};


#endif //LAPTOPMANUFACTURER_LAPTOP_MANUFACTURER_H
