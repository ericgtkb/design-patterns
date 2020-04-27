#include <iostream>
#include "laptop.h"

void Laptop::set_name(const std::string &name) {
    _name = name;
}

void Laptop::set_cpu(const std::string &cpu) {
    _cpu = cpu;
}

void Laptop::set_memory(const std::string &memory) {
    _memory = memory;
}

void Laptop::set_os(const std::string &os) {
    _os = os;
}

void Laptop::show_specs() const {
    std::cout << std::string(50, '=') << "\n"
              << "This is a " << _name << ",\n"
              << "with a " << _cpu << " cpu,\n"
              << "with " << _memory << " of memory,\n"
              << "running a " << _os << " operating system.\n\n";


}
