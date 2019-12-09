//
// Created by ericchen on 12/8/19.
//

#ifndef CELLPHONE_CELL_PHONE_H
#define CELLPHONE_CELL_PHONE_H

#include <memory>
#include <string>

class CellPhoneMode;

class CellPhone {
public:
    CellPhone(const std::string &name);

    const std::string &get_name() const;

    void go_normal();
    void go_silent();
    void go_airplane();

    void new_message();
    void new_phone_call();
    void new_app_notification();


private:
    std::string name;
    std::unique_ptr<CellPhoneMode> normal_mode;
    std::unique_ptr<CellPhoneMode> silent_mode;
    std::unique_ptr<CellPhoneMode> airplane_mode;
    CellPhoneMode* mode;
};


#endif //CELLPHONE_CELL_PHONE_H
