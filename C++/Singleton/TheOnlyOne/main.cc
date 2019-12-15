#include <iostream>
#include "the_only_one.h"

int main() {
    TheOnlyOne* the_only_one {TheOnlyOne::get_instance()};
    TheOnlyOne* another_one {TheOnlyOne::get_instance()};

    std::cout << the_only_one << '\n';
    std::cout << another_one << '\n';

    return 0;
}