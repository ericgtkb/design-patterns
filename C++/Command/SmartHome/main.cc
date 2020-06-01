#include <memory>
#include "smart_home.h"


static SmartHome set_up_smart_home() {
    SmartHome home {};
    std::shared_ptr<Light> light {std::make_shared<Light>()};
    std::shared_ptr<TV> tv {std::make_shared<TV>()};

    std::unique_ptr<Command> light_on_command {std::make_unique<LightOnCommand>(light)};
    std::unique_ptr<Command> light_off_command {std::make_unique<LightOffCommand>(light)};

    std::unique_ptr<Command> tv_on_command {std::make_unique<TVOnCommand>(tv)};
    std::unique_ptr<Command> tv_off_command {std::make_unique<TVOffCommand>(tv)};

    home.add_command("light", light_on_command, light_off_command);
    home.add_command("tv", tv_on_command, tv_off_command);

    return home;
}

int main() {
    SmartHome home = set_up_smart_home();
    home.turn_on("light");
    home.turn_on("tv");

    home.turn_off("tv");
    home.turn_off("light");

    return 0;
}
