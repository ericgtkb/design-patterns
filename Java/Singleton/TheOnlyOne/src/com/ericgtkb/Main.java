package com.ericgtkb;

public class Main {

    public static void main(String[] args) {
        TheOnlyOne theOnlyOne = TheOnlyOne.getInstance();
        TheOnlyOne anotherOne = TheOnlyOne.getInstance();

        System.out.println("Info of the first object: " + theOnlyOne);
        System.out.println("Info of the second object: " + anotherOne);

    }
}
