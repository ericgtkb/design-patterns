#include <iostream>
#include "duck.h"


/* Strategy: Define a family of algorithms, encapsulate each one, and make them interchangeable. Strategy
 * lets the algorithm vary independently from clients that use it.
 * */

void test_duck(Duck* duck) {
    std::cout << std::string(50, '-') << '\n';
    duck->display();
    duck->swim();
    duck->perform_fly();
    duck->perform_quack();

    std::cout << std::string(50, '-') << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);

    std::unique_ptr<Duck> mallard {std::make_unique<MallardDuck>()};
    test_duck(mallard.get());

    std::unique_ptr<Duck> model {std::make_unique<ModelDuck>()};
    test_duck(model.get());

    // Define a FlyBehavior class
    class FlyRocketPowered : public FlyBehavior {
    public:
        void fly() override {
            std::cout << "I'm flying with a rocket!\n";
        }
    };

    // To change a duck's behavior just call setter at runtime
    model->set_fly_behavior(std::make_unique<FlyRocketPowered>());
    test_duck(model.get());

    return 0;
}