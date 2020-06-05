#ifndef CALCULATOR_OBSERVER_H
#define CALCULATOR_OBSERVER_H

#include "subject.h"

class Observer {
public:
    virtual ~Observer() = default;
    virtual void update() = 0;
};

class Display {
public:
    virtual ~Display() = default;
    virtual void display() = 0;
};

class Add : public Observer, public Display {
public:
    explicit Add(Subject& s);
    void update() override;
    void display() override;

private:
    void calculate_sum();
    Subject* subject;
    int a;
    int b;
    int sum;
};

class Average : public Observer, public Display {
public:
    explicit Average(Subject& s);
    void update() override;
    void display() override;

private:
    void calculate_average(int a, int b);
    Subject* subject;
    double a_ave;
    double b_ave;
    int count;
};

#endif //CALCULATOR_OBSERVER_H
