#include "smart_home.h"

SmartHome::SmartHome() : on_commands(), off_commands() {}

void SmartHome::add_command(const std::string& name, std::unique_ptr<Command>& on_command,
                            std::unique_ptr<Command>& off_command) {
    on_commands[name] = std::move(on_command);
    off_commands[name] = std::move(off_command);
}

void SmartHome::turn_on(const std::string &name) {
    on_commands[name]->execute();
}

void SmartHome::turn_off(const std::string &name) {
    off_commands[name]->execute();
}

