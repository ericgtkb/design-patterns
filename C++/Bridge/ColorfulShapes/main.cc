#include <iostream>
#include "shape.h"

int main() {
    std::unique_ptr<Shape> rectangle {std::make_unique<Rectangle>(std::make_unique<RedColor>())};
    std::unique_ptr<Shape> triangle {std::make_unique<Triangle>(std::make_unique<GreenColor>())};

    rectangle->draw_shape();
    rectangle->resize(40);

    triangle->draw_shape();
    triangle->resize(110);

    std::cout << "Changing the colors of the shapes...\n";
    rectangle->set_color(std::make_unique<BlueColor>());
    triangle->set_color(std::make_unique<RedColor>());

    rectangle->draw_shape();
    triangle->draw_shape();
    return 0;
}
