package com.ericgtkb;


// This is the prototype interface, all subclass must override clone
public abstract class Shape implements Cloneable {
    public abstract void draw();

    // For complex objects deep copy may be required
    @Override
    public Shape clone() throws CloneNotSupportedException {
        return (Shape) super.clone();
    }
}

class Rectangle extends Shape {
    @Override
    public void draw() {
        System.out.println("Drawing a rectangle...");
    }

    @Override
    public Shape clone() throws CloneNotSupportedException {
        return (Rectangle) super.clone();
    }
}

class Triangle extends Shape {
    @Override
    public void draw() {
        System.out.println("Drawing a triangle...");
    }

    @Override
    public Shape clone() throws CloneNotSupportedException {
        return (Triangle) super.clone();
    }
}
