#include <iostream>
#include "scrollbar.h"

void WindowsStyleScrollbar::scroll() const {
    std::cout << "Scrolling this Windows-style scrollbar!!!\n";
}


void MacStyleScrollbar::scroll() const {
    std::cout << "Scrolling this Mac-style scrollbar!!!\n";
}
