#include <iostream>
#include <vector>
#include <memory>
#include "electronic_device.h"

int main() {
    std::vector<std::unique_ptr<ElectronicDevice>> electronic_devices(4);
    electronic_devices[0] = std::make_unique<TV>();
    electronic_devices[1] = std::make_unique<Laptop>();
    electronic_devices[2] = std::make_unique<VideoGameConsole>();
    electronic_devices[3] = std::make_unique<Laptop>();
    PriceVisitor price_visitor {};
    PowerConsumptionVisitor power_consumption_visitor {};

    std::cout << "Visiting the devices one by one...\n";
    for (auto& device : electronic_devices) {
        device->accept(price_visitor);
        device->accept(power_consumption_visitor);
    }

    std::cout << "Here's a summary the visitors got:\n";
    price_visitor.summary();
    power_consumption_visitor.summary();

    return 0;
}
