#ifndef SHAPEFACTORY_SHAPE_FACTORY_H
#define SHAPEFACTORY_SHAPE_FACTORY_H


#include <unordered_map>
#include <string>
#include "shape.h"

class ShapeFactory {
public:
    static std::unique_ptr<Shape> get_shape(const std::string&);
    static void set_up_prototypes();
private:
    static std::unordered_map<std::string, std::unique_ptr<Shape>> shape_prototypes;
};


#endif //SHAPEFACTORY_SHAPE_FACTORY_H
