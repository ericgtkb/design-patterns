#include "cell_phone.h"
#include "cell_phone_mode.h"

CellPhone::CellPhone(const std::string &name) : name(name),
                                                normal_mode{std::make_unique<NormalMode>(this)},
                                                silent_mode{std::make_unique<SilentMode>(this)},
                                                airplane_mode{std::make_unique<AirplaneMode>(this)} {
    mode = normal_mode.get();
}

const std::string &CellPhone::get_name() const {
    return name;
}

void CellPhone::go_normal() {
    mode = normal_mode.get();
}

void CellPhone::go_silent() {
    mode = silent_mode.get();
}

void CellPhone::go_airplane() {
    mode = airplane_mode.get();
}

void CellPhone::new_message() {
    mode->new_message();
}

void CellPhone::new_phone_call() {
    mode->new_phone_call();
}

void CellPhone::new_app_notification() {
    mode->new_app_notification();
}

