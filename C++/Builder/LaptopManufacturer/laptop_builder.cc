#include "laptop_builder.h"

MacbookBuilder::MacbookBuilder() : _laptop{std::make_unique<Laptop>()} {
}

void MacbookBuilder::set_laptop_name() {
    _laptop->set_name("Macbook");
}

void MacbookBuilder::install_cpu() {
    _laptop->set_cpu("Intel i7");
}

void MacbookBuilder::install_memory() {
    _laptop->set_memory("16 GB");
}

void MacbookBuilder::install_os() {
    _laptop->set_os("macOS");
}

std::unique_ptr<Laptop> MacbookBuilder::get_laptop() {
    return std::move(_laptop);
}


LinuxLaptopBuilder::LinuxLaptopBuilder() : _laptop{std::make_unique<Laptop>()} {
}

void LinuxLaptopBuilder::set_laptop_name() {
    _laptop->set_name("Linux laptop");
}

void LinuxLaptopBuilder::install_cpu() {
    _laptop->set_cpu("Intel i9");
}

void LinuxLaptopBuilder::install_memory() {
    _laptop->set_memory("32 GB");
}

void LinuxLaptopBuilder::install_os() {
    _laptop->set_os("linux (Ubuntu)");
}

std::unique_ptr<Laptop> LinuxLaptopBuilder::get_laptop() {
    return std::move(_laptop);
}


WindowsLaptopBuilder::WindowsLaptopBuilder() : _laptop{std::make_unique<Laptop>()} {
}

void WindowsLaptopBuilder::set_laptop_name() {
    _laptop->set_name("Window laptop");
}

void WindowsLaptopBuilder::install_cpu() {
    _laptop->set_cpu("Intel i5");
}

void WindowsLaptopBuilder::install_memory() {
    _laptop->set_memory("16 GB");
}

void WindowsLaptopBuilder::install_os() {
    _laptop->set_os("windows 10");
}

std::unique_ptr<Laptop> WindowsLaptopBuilder::get_laptop() {
    return std::move(_laptop);
}
