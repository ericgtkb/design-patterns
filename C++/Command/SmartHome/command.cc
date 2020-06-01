#include <iostream>
#include "command.h"

LightOnCommand::LightOnCommand(const std::shared_ptr<Light> &light) : light(light) {}

void LightOnCommand::execute() {
    light->on();
}

LightOffCommand::LightOffCommand(const std::shared_ptr<Light> &light) : light(light) {}

void LightOffCommand::execute() {
    light->off();
}


TVOnCommand::TVOnCommand(const std::shared_ptr<TV> &tv) : tv(tv) {}

void TVOnCommand::execute() {
    tv->on();
    switch_channel();
}

void TVOnCommand::switch_channel() {
    int channel_number;
    std::cout << "Choose a channel...\n";
    std::cin >> channel_number;

    if (std::cin.fail()) {
        std::cout << "Invalid channel number...\nSetting channel number to 0...\n";
        channel_number = 0;
    }

    tv->switch_channel(channel_number);
}

TVOffCommand::TVOffCommand(const std::shared_ptr<TV> &tv) : tv(tv) {}

void TVOffCommand::execute() {
    tv->off();
}
