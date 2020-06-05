#ifndef ELECTRONICDEVICES_ELECTRONIC_DEVICE_H
#define ELECTRONICDEVICES_ELECTRONIC_DEVICE_H

#include "device_visitor.h"

class ElectronicDevice {
public:
    virtual ~ElectronicDevice() = default;
    virtual void accept(DeviceVisitor& visitor) = 0;
};

class Laptop : public ElectronicDevice {
public:
    Laptop();
    double get_price() const;
    double get_power() const;
    void accept(DeviceVisitor& visitor) override;

private:
    double _price;
    double _power;
};

class TV : public ElectronicDevice {
public:
    TV();
    double get_price() const;
    double get_power() const;
    void accept(DeviceVisitor& visitor) override;

private:
    double _price;
    double _power;
};

class VideoGameConsole : public ElectronicDevice {
public:
    VideoGameConsole();
    double get_price() const;
    double get_power() const;
    void accept(DeviceVisitor& visitor) override;

private:
    double _price;
    double _power;
};

#endif //ELECTRONICDEVICES_ELECTRONIC_DEVICE_H
