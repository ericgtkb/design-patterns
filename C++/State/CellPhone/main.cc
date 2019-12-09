#include <iostream>
#include "cell_phone.h"
#include "cell_phone_mode.h"

int main() {
    CellPhone my_phone {"Eric"};
    my_phone.new_message();
    my_phone.new_phone_call();
    my_phone.new_app_notification();

    std::cout << "Going to a meeting...\n";
    my_phone.go_silent();
    my_phone.new_message();
    my_phone.new_phone_call();
    my_phone.new_app_notification();

    std::cout << "Getting on an airplane...\n";
    my_phone.go_airplane();
    my_phone.new_message();
    my_phone.new_phone_call();
    my_phone.new_app_notification();

    std::cout << "Landed at the destination...\n";
    my_phone.go_normal();
    my_phone.new_message();
    my_phone.new_phone_call();
    my_phone.new_app_notification();

    return 0;
}
