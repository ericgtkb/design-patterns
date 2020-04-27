#include "laptop_manufacturer.h"

int main() {
    MacbookBuilder macbook_builder {};
    LinuxLaptopBuilder linux_builder {};
    WindowsLaptopBuilder windows_builder {};

    LaptopManufacturer manufacturer(&macbook_builder);
    manufacturer.build_laptop();
    std::unique_ptr<Laptop> laptop = manufacturer.deliver_laptop();
    laptop->show_specs();

    manufacturer.set_builder(&linux_builder);
    manufacturer.build_laptop();
    laptop = manufacturer.deliver_laptop();
    laptop->show_specs();

    manufacturer.set_builder(&windows_builder);
    manufacturer.build_laptop();
    laptop = manufacturer.deliver_laptop();
    laptop->show_specs();
    return 0;
}
