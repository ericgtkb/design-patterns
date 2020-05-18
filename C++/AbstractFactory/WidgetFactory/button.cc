#include <iostream>
#include "button.h"

void WindowsStyleButton::click() const {
    std::cout << "This Windows-style button is clicked!!!\n";
}


void MacStyleButton::click() const {
    std::cout << "This Mac-style button is clicked!!!\n";
}
