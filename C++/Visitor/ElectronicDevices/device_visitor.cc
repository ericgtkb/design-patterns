#include <iostream>
#include "device_visitor.h"
#include "electronic_device.h"

PriceVisitor::PriceVisitor() : _total_price(0) {}

void PriceVisitor::visit(Laptop* laptop) {
    _total_price += laptop->get_price();
}

void PriceVisitor::visit(TV* tv) {
    _total_price += tv->get_price();
}

void PriceVisitor::visit(VideoGameConsole* video_game_console) {
    _total_price += video_game_console->get_price();
}

void PriceVisitor::summary() const {
    std::cout << "Total cost for your electronic devices is $" << _total_price << ".\n";
}

PowerConsumptionVisitor::PowerConsumptionVisitor() : _total_power(0) {}

void PowerConsumptionVisitor::visit(Laptop* laptop) {
    _total_power += laptop->get_power();
}

void PowerConsumptionVisitor::visit(TV* tv) {
    _total_power += tv->get_power();
}

void PowerConsumptionVisitor::visit(VideoGameConsole* video_game_console) {
    _total_power += video_game_console->get_power();
}

void PowerConsumptionVisitor::summary() const {
    std::cout << "Total power consumption for your electronic devices is " << _total_power << " watts.\n";
}
