#include "electronic_device.h"

Laptop::Laptop() : _price(499.99), _power(70) {}

double Laptop::get_price() const {
    return _price;
}

double Laptop::get_power() const {
    return _power;
}

void Laptop::accept(DeviceVisitor& visitor) {
    visitor.visit(this);
}


TV::TV() : _price(339.99), _power(140) {}

double TV::get_price() const {
    return _price;
}

double TV::get_power() const {
    return _power;
}

void TV::accept(DeviceVisitor& visitor) {
    visitor.visit(this);
}


VideoGameConsole::VideoGameConsole() : _price(435.95), _power(12) {}

double VideoGameConsole::get_price() const {
    return _price;
}

double VideoGameConsole::get_power() const {
    return _power;
}

void VideoGameConsole::accept(DeviceVisitor& visitor) {
    visitor.visit(this);
}
