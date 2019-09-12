//
// Created by Eric Chen on 2019-09-02.
//

#ifndef DUCKSIMULATION_DUCK_BEHAVIORS_H
#define DUCKSIMULATION_DUCK_BEHAVIORS_H

// Interface FlyBehavior
class FlyBehavior {
public:
    virtual ~FlyBehavior() = default;
    virtual void fly() = 0;
};

// Concrete FlyBehavior classes
class FlyWithWings : public FlyBehavior {
public:
    void fly() override;
};

class FlyNoWay : public FlyBehavior {
public:
    void fly() override;
};


// Interface QuackBehavior
class QuackBehavior {
public:
    virtual ~QuackBehavior() = default;
    virtual void quack() = 0;
};

// Concrete QuackBehavior classes
class Quack : public QuackBehavior {
public:
    void quack() override;
};

class MuteQuack : public QuackBehavior {
public:
    void quack() override;
};

class Squeak : public QuackBehavior {
public:
    void quack() override;
};


#endif //DUCKSIMULATION_DUCK_BEHAVIORS_H
