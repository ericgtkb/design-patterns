//
// Created by Eric Chen on 12/14/19.
//

#ifndef THEONLYONE_THE_ONLY_ONE_H
#define THEONLYONE_THE_ONLY_ONE_H


#include <memory>

class TheOnlyOne {
public:
    static TheOnlyOne* get_instance();

private:
    TheOnlyOne() = default;
    static std::unique_ptr<TheOnlyOne> only_instance;
};


#endif //THEONLYONE_THE_ONLY_ONE_H
