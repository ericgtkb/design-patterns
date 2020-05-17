package com.ericgtkb;

public class Main {

    public static void main(String[] args) {
        GuitarFactory fender = new FenderFactory();
        GuitarFactory gibson = new GibsonFactory();

        Guitar guitar = fender.getGuitar("Stratocaster");
        System.out.println("Just ordered a " + guitar.getName() + "!!!");
        System.out.println();

        guitar = fender.getGuitar("Telecaster");
        System.out.println("Just ordered a " + guitar.getName() + "!!!");
        System.out.println();

        guitar = gibson.getGuitar("Les Paul");
        System.out.println("Just ordered a " + guitar.getName() + "!!!");
        System.out.println();

        guitar = gibson.getGuitar("SG");
        System.out.println("Just ordered a " + guitar.getName() + "!!!");
        System.out.println();
    }
}
