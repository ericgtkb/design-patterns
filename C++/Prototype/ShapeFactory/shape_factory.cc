#include "shape_factory.h"


std::unordered_map<std::string, std::unique_ptr<Shape>> ShapeFactory::shape_prototypes {};

std::unique_ptr<Shape> ShapeFactory::get_shape(const std::string & shape_type) {
    Shape* shape {shape_prototypes[shape_type].get()};
    return shape->clone();
}

void ShapeFactory::set_up_prototypes() {
    shape_prototypes["rectangle"] = std::make_unique<Rectangle>();
    shape_prototypes["triangle"] = std::make_unique<Triangle>();
}
