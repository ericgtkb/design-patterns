package com.ericgtkb;

public class Main {

    public static void main(String[] args) {
        Shape rectangle = new Rectangle(new RedColor());
        Shape triangle = new Triangle(new GreenColor());

        rectangle.drawShape();
        rectangle.resize(20);
        triangle.drawShape();
        triangle.resize(110);

        System.out.println("Changing the colors of the shapes...");
        rectangle.setColor(new BlueColor());
        triangle.setColor(new RedColor());

        rectangle.drawShape();
        triangle.drawShape();
    }
}
