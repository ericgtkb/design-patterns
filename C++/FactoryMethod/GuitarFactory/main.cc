#include <iostream>
#include "guitar_factory.h"

int main() {
    FenderFactory fender {};
    GibsonFactory gibson {};

    std::unique_ptr<Guitar> guitar {fender.get_guitar("Stratocaster")};
    std::cout << "Just ordered a " << guitar->get_name() << "!!!\n\n";

    guitar = fender.get_guitar("Telecaster");
    std::cout << "Just ordered a " << guitar->get_name() << "!!!\n\n";

    guitar = gibson.get_guitar("Les Paul");
    std::cout << "Just ordered a " << guitar->get_name() << "!!!\n\n";

    guitar = gibson.get_guitar("SG");
    std::cout << "Just ordered a " << guitar->get_name() << "!!!\n\n";

    return 0;
}
