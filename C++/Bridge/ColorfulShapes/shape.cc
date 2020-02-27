#include <iostream>
#include "shape.h"

Shape::Shape(std::unique_ptr<Color> color) : color{std::move(color)} {
}

void Shape::set_color(std::unique_ptr<Color> color) {
    this->color = std::move(color);
}


Rectangle::Rectangle(std::unique_ptr<Color> color) : Shape(std::move(color)) {
}

void Rectangle::draw_shape() const {
    std::cout << "Drawing a rectangle...\n";
    color->fill_color();
}

void Rectangle::resize(double percent) const {
    std::cout << "Resizing the rectangle to " << percent << " % of its original size...\n";
}


Triangle::Triangle(std::unique_ptr<Color> color) : Shape(std::move(color)) {
}

void Triangle::draw_shape() const {
    std::cout << "Drawing a triangle...\n";
    color->fill_color();
}

void Triangle::resize(double percent) const {
    std::cout << "Resizing the triangle to " << percent << " % of its original size...\n";
}
