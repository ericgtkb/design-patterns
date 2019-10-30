#include <iostream>
#include "duck.h"
#include "turkey.h"
#include "turkey_adapter.h"

void use_duck(Duck& duck) {
    duck.quack();
    duck.fly();
}

int main() {
    MallardDuck duck {};
    WildTurkey turkey {};
    TurkeyAdapter turkey_duck {turkey};

    std::cout << "The turkey says...\n";
    turkey.gobble();
    turkey.fly();

    std::cout << "\nThe duck says...\n";
    use_duck(duck);

    std::cout << "\nThe turkey duck says...\n";
    use_duck(turkey_duck);


    return 0;
}