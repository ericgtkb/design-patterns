#ifndef TURKEYDUCK_TURKEY_ADAPTER_H
#define TURKEYDUCK_TURKEY_ADAPTER_H


#include "duck.h"
#include "turkey.h"

class TurkeyAdapter : public Duck {
public:
    TurkeyAdapter(Turkey& turkey);
    void quack() override;
    void fly() override;

private:
    Turkey& turkey;
};


#endif //TURKEYDUCK_TURKEY_ADAPTER_H
