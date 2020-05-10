#include <iostream>
#include "shape.h"


Shape::Shape(const Shape &) {
    // Some copy operations
}


Rectangle::Rectangle(const Rectangle &) {
    // Some copy operations
}

void Rectangle::draw() {
    std::cout << "Drawing a rectangle...\n";
}

std::unique_ptr<Shape> Rectangle::clone() {
    return std::make_unique<Rectangle>(*this);
}


Triangle::Triangle(const Triangle &) {
    // Some copy operations
}

void Triangle::draw() {
    std::cout << "Drawing a triangle...\n";
}

std::unique_ptr<Shape> Triangle::clone() {
    return std::make_unique<Triangle>(*this);
}
