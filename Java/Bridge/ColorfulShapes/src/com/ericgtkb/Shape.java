package com.ericgtkb;

// Without the bridge pattern, we will need (number of shapes * number of colors) classes and
// the Color classes and Shape classes cannot vary independently
public abstract class Shape {
    protected Color color;

    public Shape(Color color) {
        this.color = color;
    }

    public void setColor(Color color) {
        this.color = color;
    }

    public abstract void drawShape();
    public abstract void resize(double percent);

}

class Rectangle extends Shape {
    public Rectangle(Color color) {
        super(color);
    }

    @Override
    public void drawShape() {
        System.out.println("Drawing a rectangle...");
        color.fillColor();
    }

    @Override
    public void resize(double percent) {
        System.out.println("Resizing the rectangle to " + percent + " % of its original size");
    }
}


class Triangle extends Shape {
    public Triangle(Color color) {
        super(color);
    }

    @Override
    public void drawShape() {
        System.out.println("Drawing a triangle...");
        color.fillColor();
    }

    @Override
    public void resize(double percent) {
        System.out.println("Resizing the triangle to " + percent + " % of its original size");
    }
}
