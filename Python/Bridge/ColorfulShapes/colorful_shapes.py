import abc


class Color(abc.ABC):
    @abc.abstractmethod
    def fill_color(self):
        pass


class RedColor(Color):
    def fill_color(self):
        print('Filling the space with color red...')


class GreenColor(Color):
    def fill_color(self):
        print('Filling the space with color green...')


class BlueColor(Color):
    def fill_color(self):
        print('Filling the space with color blue...')


class Shape(abc.ABC):
    def __init__(self, color: Color):
        self._color = color

    @property
    def color(self):
        return self._color

    @color.setter
    def color(self, color):
        self._color = color

    @abc.abstractmethod
    def draw_shape(self):
        pass

    @abc.abstractmethod
    def resize(self, percent):
        pass


class Rectangle(Shape):
    def __init__(self, color):
        super().__init__(color)

    def draw_shape(self):
        print('Drawing a rectangle...')
        self._color.fill_color()

    def resize(self, percent):
        print(f'Resizing the rectangle to {percent} % of its original size...')


class Triangle(Shape):
    def __init__(self, color):
        super().__init__(color)

    def draw_shape(self):
        print('Drawing a triangle...')
        self._color.fill_color()

    def resize(self, percent):
        print(f'Resizing the triangle to {percent} % of its original size...')


if __name__ == '__main__':
    rectangle = Rectangle(RedColor())
    triangle = Triangle(GreenColor())

    rectangle.draw_shape()
    rectangle.resize(30)
    triangle.draw_shape()
    triangle.resize(120)

    print('Changing the colors of the shapes...')

    rectangle.color = BlueColor()
    triangle.color = RedColor()

    rectangle.draw_shape()
    triangle.draw_shape()
