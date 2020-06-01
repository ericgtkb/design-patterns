#ifndef SMARTHOME_COMMAND_H
#define SMARTHOME_COMMAND_H


#include <memory>
#include "household_items.h"

class Command {
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
};


class LightOnCommand : public Command {
public:
    explicit LightOnCommand(const std::shared_ptr<Light>& light);
    void execute() override;

private:
    std::shared_ptr<Light> light;
};

class LightOffCommand : public Command {
public:
    explicit LightOffCommand(const std::shared_ptr<Light>& light);
    void execute() override;

private:
    std::shared_ptr<Light> light;
};


class TVOnCommand : public Command {
public:
    explicit TVOnCommand(const std::shared_ptr<TV>& tv);
    void execute() override;
    void switch_channel();

private:
    std::shared_ptr<TV> tv;
};

class TVOffCommand : public Command {
public:
    explicit TVOffCommand(const std::shared_ptr<TV>& tv);
    void execute() override;

private:
    std::shared_ptr<TV> tv;
};

#endif //SMARTHOME_COMMAND_H
