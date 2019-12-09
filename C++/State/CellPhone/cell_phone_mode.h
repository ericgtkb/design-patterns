//
// Created by ericchen on 12/8/19.
//

#ifndef CELLPHONE_CELL_PHONE_MODE_H
#define CELLPHONE_CELL_PHONE_MODE_H

#include "cell_phone.h"

class CellPhoneMode {
public:
    virtual ~CellPhoneMode() = default;
    virtual void new_message() = 0;
    virtual void new_phone_call() = 0;
    virtual void new_app_notification() = 0;
};

class NormalMode : public CellPhoneMode {
public:
    NormalMode(CellPhone *phone);
    void new_message() override;
    void new_phone_call() override;
    void new_app_notification() override;

private:
    CellPhone* phone;
};

class SilentMode : public CellPhoneMode {
public:
    SilentMode(CellPhone *phone);
    void new_message() override;
    void new_phone_call() override;
    void new_app_notification() override;

private:
    CellPhone* phone;
};

class AirplaneMode : public CellPhoneMode {
public:
    AirplaneMode(CellPhone *phone);
    void new_message() override;
    void new_phone_call() override;
    void new_app_notification() override;

private:
    CellPhone* phone;
};

#endif //CELLPHONE_CELL_PHONE_MODE_H
