#include <iostream>
#include "shape_factory.h"

int main() {
    ShapeFactory::set_up_prototypes();

    auto rectangle1 = ShapeFactory::get_shape("rectangle");
    auto rectangle2 = ShapeFactory::get_shape("rectangle");
    rectangle1->draw();
    rectangle2->draw();

    std::cout << "Confirm that they are different rectangles, even though they are from the same prototype\n";
    std::cout << "1: " << rectangle1.get() << ", 2: " << rectangle2.get() << "\n";

    auto triangle1 = ShapeFactory::get_shape("triangle");
    // We can also clone without the factory
    auto triangle2 = triangle1->clone();
    triangle1->draw();
    triangle2->draw();

    std::cout << "Confirm that they are different triangles, even though they are from the same prototype\n";
    std::cout << "1: " << triangle1.get() << ", 2: " << triangle2.get() << "\n";

    return 0;
}
