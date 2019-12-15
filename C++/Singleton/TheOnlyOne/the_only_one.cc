//
// Created by Eric Chen on 12/14/19.
//

#include <iostream>
#include "the_only_one.h"

std::unique_ptr<TheOnlyOne> TheOnlyOne::only_instance {nullptr};

TheOnlyOne* TheOnlyOne::get_instance() {
    if (!only_instance) {
        std::cout << "No instance exists yet, creating the only instance...\n";
        only_instance.reset(new TheOnlyOne());
    }
    std::cout << "This is the only instance!\n";
    return only_instance.get();
}
