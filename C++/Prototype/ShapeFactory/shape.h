#ifndef SHAPEFACTORY_SHAPE_H
#define SHAPEFACTORY_SHAPE_H


#include <memory>

class Shape {
public:
    // Ideally we should also implement move constructor and overload operator=
    Shape() = default;
    Shape(const Shape&);
    virtual ~Shape() = default;
    virtual void draw() = 0;
    virtual std::unique_ptr<Shape> clone() = 0;

};


class Rectangle : public Shape {
public:
    Rectangle() = default;
    Rectangle(const Rectangle&);

    void draw() override;
    // Note covariant return type cannot be a smart pointer
    std::unique_ptr<Shape> clone() override;
};


class Triangle : public Shape {
public:
    Triangle() = default;
    Triangle(const Triangle&);

    void draw() override;
    // Note covariant return type cannot be a smart pointer
    std::unique_ptr<Shape> clone() override;
};


#endif //SHAPEFACTORY_SHAPE_H
