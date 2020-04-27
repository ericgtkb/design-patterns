#include "laptop_manufacturer.h"

LaptopManufacturer::LaptopManufacturer(LaptopBuilder *builder) : _builder(builder) {}

void LaptopManufacturer::set_builder(LaptopBuilder *builder) {
    _builder = builder;
}

void LaptopManufacturer::build_laptop() {
    _builder->set_laptop_name();
    _builder->install_cpu();
    _builder->install_memory();
    _builder->install_os();
}

std::unique_ptr<Laptop> LaptopManufacturer::deliver_laptop() {
    return _builder->get_laptop();
}
