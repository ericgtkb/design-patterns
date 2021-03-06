#include "turkey_adapter.h"

TurkeyAdapter::TurkeyAdapter(Turkey& turkey) : turkey(turkey) {}

void TurkeyAdapter::quack() {
    turkey.gobble();
}

void TurkeyAdapter::fly() {
    for (int i = 0; i < 5; ++i) {
        turkey.fly();
    }
}
