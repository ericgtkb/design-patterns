package com.ericgtkb;

import java.util.HashMap;
import java.util.Map;

public class ShapeFactory {
    private static Map<String, Shape> shapePrototypes = new HashMap<>();

    public static Shape getShape(String shapeType) throws CloneNotSupportedException {
        Shape shape = shapePrototypes.get(shapeType);
        return (Shape) shape.clone();
    }

    public static void setUpPrototypes() {
        Rectangle rectangle = new Rectangle();
        Triangle triangle = new Triangle();

        shapePrototypes.put("rectangle", rectangle);
        shapePrototypes.put("triangle", triangle);
    }
}
