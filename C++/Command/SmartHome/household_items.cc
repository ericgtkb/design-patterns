#include <iostream>
#include "household_items.h"

void Light::on() {
    std::cout << "Turning the light on...\n";
}

void Light::off() {
    std::cout << "Turning the light off...\n";
}

void TV::on() {
    std::cout << "Turning the tv on...\n";
}

void TV::switch_channel(int channel_number) {
    if (channel_number < 0 || channel_number > 100) {
        std::cout << "Channel number out of range...\nSwitching to channel 0...\n";
    } else {
        std::cout << "Switching to channel " << channel_number << "...\n";
    }
}

void TV::off() {
    std::cout << "Turning the tv off...\n";
}

