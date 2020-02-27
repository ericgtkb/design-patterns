#ifndef COLORFULSHAPES_SHAPE_H
#define COLORFULSHAPES_SHAPE_H


#include <memory>
#include "color.h"

class Shape {
public:
    explicit Shape(std::unique_ptr<Color> color);
    virtual ~Shape() = default;
    void set_color(std::unique_ptr<Color> color);
    virtual void draw_shape() const = 0;
    virtual void resize(double percent) const = 0;

protected:
    std::unique_ptr<Color> color;
};


class Rectangle : public Shape {
public:
    explicit Rectangle(std::unique_ptr<Color> color);
    void draw_shape() const override;
    void resize(double percent) const override;
};


class Triangle : public Shape {
public:
    explicit Triangle(std::unique_ptr<Color> color);
    void draw_shape() const override;
    void resize(double percent) const override;
};

#endif //COLORFULSHAPES_SHAPE_H
