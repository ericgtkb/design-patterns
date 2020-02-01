#include <iostream>
#include "house.h"

void House::build_house() {
    build_foundation();
    build_pillars();
    build_walls();
    build_windows();
    std::cout << "The house is built!\n";
}

void House::build_foundation() {
    std::cout << "Building foundation of the house...\n";
}

void House::build_windows() {
    std::cout << "Building glass windows...\n";
}

void WoodenHouse::build_pillars() {
    std::cout << "Building wooden pillars...\n";
}

void WoodenHouse::build_walls() {
    std::cout << "Building wooden walls...\n";
}

void GlassHouse::build_pillars() {
    std::cout << "Building glass pillars...\n";
}

void GlassHouse::build_walls() {
    std::cout << "Building glass walls...\n";
}
