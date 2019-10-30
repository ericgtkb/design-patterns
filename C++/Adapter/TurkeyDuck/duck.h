//
// Created by Eric Chen on 10/30/19.
//

#ifndef TURKEYDUCK_DUCK_H
#define TURKEYDUCK_DUCK_H


class Duck {
public:
    virtual ~Duck() = default;
    virtual void quack() = 0;
    virtual void fly() = 0;
};

class MallardDuck : public Duck {
public:
    void quack() override;
    void fly() override;
};


#endif //TURKEYDUCK_DUCK_H
