#ifndef ELECTRONICDEVICES_DEVICE_VISITOR_H
#define ELECTRONICDEVICES_DEVICE_VISITOR_H


class Laptop;
class TV;
class VideoGameConsole;

class DeviceVisitor {
public:
    virtual ~DeviceVisitor() = default;
    virtual void visit(Laptop* laptop) = 0;
    virtual void visit(TV* tv) = 0;
    virtual void visit(VideoGameConsole* video_game_console) = 0;
};

class PriceVisitor : public DeviceVisitor {
public:
    PriceVisitor();
    void visit(Laptop* laptop) override;
    void visit(TV* tv) override;
    void visit(VideoGameConsole* video_game_console) override;
    void summary() const;

private:
    double _total_price;
};

class PowerConsumptionVisitor : public DeviceVisitor {
public:
    PowerConsumptionVisitor();
    void visit(Laptop* laptop) override;
    void visit(TV* tv) override;
    void visit(VideoGameConsole* video_game_console) override;
    void summary() const;

private:
    double _total_power;
};


#endif //ELECTRONICDEVICES_DEVICE_VISITOR_H
