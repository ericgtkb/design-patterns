package com.ericgtkb;

public class Main {

    public static void main(String[] args) {
        House woodenHouse = new WoodenHouse();
        woodenHouse.buildHouse();
        System.out.println("============================");
        House glassHouse = new GlassHouse();
        glassHouse.buildHouse();
    }
}
