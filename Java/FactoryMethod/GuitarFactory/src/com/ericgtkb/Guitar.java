package com.ericgtkb;

public abstract class Guitar {
    String name;
    String body;
    String pickup;
    String bridge;

    void assemble() {
        System.out.println("Building a(n) " + name + "...");
        System.out.println("Carving a(n) " + body + " body...");
        System.out.println("Installing " + pickup + " pickups...");
        System.out.println("Installing a(n) " + bridge + " bridge...");
    }

    void stringTheGuitar() {
        System.out.println("Putting on 0.10 strings...");
    }

    String getName() {
        return name;
    }
}

class GibsonLesPaul extends Guitar {
    public GibsonLesPaul() {
        name = "Gibson Les Paul";
        body = "Les Paul";
        pickup = "Humbucker";
        bridge = "fixed";
    }
}

class GibsonSG extends Guitar {
    public GibsonSG() {
        name = "Gibson SG";
        body = "SG";
        pickup = "Humbucker";
        bridge = "fixed";
    }
}

class FenderStratocaster extends Guitar {
    public FenderStratocaster() {
        name = "Fender Stratocaster";
        body = "Stratocaster";
        pickup = "single-coil";
        bridge = "tremolo";
    }

    @Override
    void stringTheGuitar() {
        System.out.println("Putting on 0.09 strings...");
    }
}

class FenderTelecaster extends Guitar {
    public FenderTelecaster() {
        name = "Fender Telecaster";
        body = "Telecaster";
        pickup = "single-coil";
        bridge = "tremolo";
    }

    @Override
    void stringTheGuitar() {
        System.out.println("Putting on 0.09 strings...");
    }
}
