#ifndef SMARTHOME_HOUSEHOLD_ITEMS_H
#define SMARTHOME_HOUSEHOLD_ITEMS_H


// Receiver
class Light {
public:
    void on();
    void off();
};

// Receiver
class TV {
public:
    void on();
    void switch_channel(int channel_number);
    void off();
};

#endif //SMARTHOME_HOUSEHOLD_ITEMS_H
