package com.ericgtkb;

public class Main {

    public static void main(String[] args) throws CloneNotSupportedException {
        ShapeFactory.setUpPrototypes();

        Shape rectangle1 = ShapeFactory.getShape("rectangle");
        Shape rectangle2 = ShapeFactory.getShape("rectangle");
        rectangle1.draw();
        rectangle2.draw();

        System.out.println("Confirm that they are different rectangles, even though they are from the same prototype");
        System.out.println("1: " + System.identityHashCode(rectangle1) + ", 2: " + System.identityHashCode(rectangle2));

        Shape triangle1 = ShapeFactory.getShape("triangle");
        // We can also clone without the factory
        Shape triangle2 = triangle1.clone();
        triangle1.draw();
        triangle2.draw();

        System.out.println("Confirm that they are different triangles, even though they are from the same prototype");
        System.out.println("1: " + System.identityHashCode(triangle1) + ", 2: " + System.identityHashCode(triangle2));

    }
}
