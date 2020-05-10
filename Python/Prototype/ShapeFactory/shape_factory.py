from __future__ import annotations
import abc
import copy


class Shape(abc.ABC):
    @abc.abstractmethod
    def draw(self):
        pass

    @abc.abstractmethod
    def clone(self) -> Shape:  # from annotations
        pass


class Rectangle(Shape):

    def draw(self):
        print('Drawing a rectangle...')

    def clone(self):
        return copy.copy(self)


class Triangle(Shape):

    def draw(self):
        print('Drawing a triangle...')

    def clone(self):
        return copy.copy(self)


class ShapeFactory:
    _shape_prototypes = {}

    @staticmethod
    def get_shape(shape_type) -> Shape:
        shape = ShapeFactory._shape_prototypes[shape_type]
        return shape.clone()

    @staticmethod
    def set_up_prototypes():
        ShapeFactory._shape_prototypes['rectangle'] = Rectangle()
        ShapeFactory._shape_prototypes['triangle'] = Triangle()


if __name__ == '__main__':
    ShapeFactory.set_up_prototypes()

    rectangle1 = ShapeFactory.get_shape('rectangle')
    rectangle2 = ShapeFactory.get_shape('rectangle')
    rectangle1.draw()
    rectangle2.draw()

    print('Confirm that they are different rectangles, even though they are from the same prototype')
    print(f'1: {id(rectangle1)}, 2: {id(rectangle2)}')

    triangle1 = ShapeFactory.get_shape('triangle')
    # We can also clone without the factory
    triangle2 = triangle1.clone()
    triangle1.draw()
    triangle2.draw()

    print('Confirm that they are different triangles, even though they are from the same prototype')
    print(f'1: {id(triangle1)}, 2: {id(triangle2)}')


