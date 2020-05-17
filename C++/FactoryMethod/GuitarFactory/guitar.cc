#include <iostream>
#include "guitar.h"


Guitar::Guitar(const std::string &name, const std::string &body, const std::string &pickup, const std::string &bridge)
        : _name(name), _body(body), _pickup(pickup), _bridge(bridge) {}

void Guitar::assemble() const {
    std::cout << "Building a(n) " << _name << "...\n";
    std::cout << "Carving a(n) " << _body << " body...\n";
    std::cout << "Installing " << _pickup << " pickups...\n";
    std::cout << "Installing " << _bridge << " bridge...\n";

}

void Guitar::string_the_guitar() const {
    std::cout << "Putting on 0.10 strings...\n";
}

const std::string &Guitar::get_name() const {
    return _name;
}


GibsonLesPaul::GibsonLesPaul() : Guitar("Gibson Les Paul", "Les Paul", "Humbucker", "fixed") {
}

void GibsonLesPaul::string_the_guitar() const {
    Guitar::string_the_guitar();
}


GibsonSG::GibsonSG() : Guitar("Gibson SG", "SG", "Humbucker", "fixed") {
}

void GibsonSG::string_the_guitar() const {
    Guitar::string_the_guitar();
}


FenderStratocaster::FenderStratocaster() : Guitar("Fender Stratocaster", "Stratocaster", "single-coil", "tremolo") {
}

void FenderStratocaster::string_the_guitar() const {
    std::cout << "Putting on 0.09 strings...\n";
}


FenderTelecaster::FenderTelecaster() : Guitar("Fender Telecaster", "Telecaster", "single-coil", "tremolo") {
}

void FenderTelecaster::string_the_guitar() const {
    std::cout << "Putting on 0.09 strings...\n";
}



