//
// Created by ericchen on 12/8/19.
//

#include <iostream>
#include "cell_phone_mode.h"

NormalMode::NormalMode(CellPhone *phone) : phone(phone) {}

void NormalMode::new_message() {
    std::cout << "Beep! " << phone->get_name() << "! You have a new message!\n";
}

void NormalMode::new_phone_call() {
    std::cout << "Ring ring! " << phone->get_name() << "! You are getting a new phone call!\n";
}

void NormalMode::new_app_notification() {
    std::cout << "Ding! " << phone->get_name() << "! You have a new app notification!\n";
}


SilentMode::SilentMode(CellPhone *phone) : phone(phone) {}

void SilentMode::new_message() {
    std::cout << "Vibrating! " << phone->get_name() << "! You have a new message!\n";
}

void SilentMode::new_phone_call() {
    std::cout << "Vibrating Vibrating!!! " << phone->get_name() << "! You are getting a new phone call!\n";
}

void SilentMode::new_app_notification() {
    std::cout << "Vibrating! " << phone->get_name() << "! You have a new app notification!\n";
}


AirplaneMode::AirplaneMode(CellPhone *phone) : phone(phone) {}

void AirplaneMode::new_message() {
    std::cout << "In airplane mode... Cannot receive any messages...\n";
}

void AirplaneMode::new_phone_call() {
    std::cout << "In airplane mode... Cannot receive any phone calls...\n";
}

void AirplaneMode::new_app_notification() {
    std::cout << "... " << phone->get_name() << "! You have a new app notification!\n";
}