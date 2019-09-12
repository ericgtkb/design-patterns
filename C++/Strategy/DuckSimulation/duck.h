//
// Created by Eric Chen on 2019-09-02.
//

#ifndef DUCKSIMULATION_DUCK_H
#define DUCKSIMULATION_DUCK_H


#include "duck_behaviors.h"

class Duck {
public:
    virtual ~Duck() = default;
    virtual void display() = 0;
    void perform_fly();
    void perform_quack();
    void set_fly_behavior(std::unique_ptr<FlyBehavior>);
    void set_quack_behavior(std::unique_ptr<QuackBehavior>);
    void swim();

protected:
    std::unique_ptr<FlyBehavior> fly_behavior;
    std::unique_ptr<QuackBehavior> quack_behavior;
};

// Concrete Duck classes
class MallardDuck : public Duck {
public:
    MallardDuck();
    void display() override;
};

class ModelDuck : public Duck {
public:
    ModelDuck();

    void display() override;
};

#endif //DUCKSIMULATION_DUCK_H
