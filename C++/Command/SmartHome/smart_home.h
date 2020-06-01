#ifndef SMARTHOME_SMART_HOME_H
#define SMARTHOME_SMART_HOME_H


#include <string>
#include <unordered_map>
#include <memory>
#include "command.h"

// Invoker class
class SmartHome {
public:
    SmartHome();
    void add_command(const std::string& name, std::unique_ptr<Command>& on_command, std::unique_ptr<Command>& off_command);
    void turn_on(const std::string& name);
    void turn_off(const std::string& name);

private:
    std::unordered_map<std::string, std::unique_ptr<Command>> on_commands;
    std::unordered_map<std::string, std::unique_ptr<Command>> off_commands;
};


#endif //SMARTHOME_SMART_HOME_H
