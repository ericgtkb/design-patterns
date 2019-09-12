//
// Created by Eric Chen on 2019-09-02.
//

#include <iostream>
#include "duck.h"

void Duck::perform_fly() {
    fly_behavior->fly();
}

void Duck::perform_quack() {
    quack_behavior->quack();
}

void Duck::swim() {
    std::cout << "All ducks swim (float)!!!\n";
}

void Duck::set_fly_behavior(std::unique_ptr<FlyBehavior> fb) {
    fly_behavior = std::move(fb);
}

void Duck::set_quack_behavior(std::unique_ptr<QuackBehavior> qb) {
    quack_behavior = std::move(qb);
}

MallardDuck::MallardDuck() {
    fly_behavior = std::make_unique<FlyWithWings>();
    quack_behavior = std::make_unique<Quack>();
}

void MallardDuck::display() {
    std::cout << "I am a mallard duck!!!\n";
}

ModelDuck::ModelDuck() {
    fly_behavior = std::make_unique<FlyNoWay>();
    quack_behavior = std::make_unique<MuteQuack>();
}

void ModelDuck::display() {
    std::cout << "I am a model duck. I can't do anything...\n";
}
