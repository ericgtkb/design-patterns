package com.ericgtkb;

// Abstract component class
public abstract class Beverage {
    String description = "Unknown Beverage";

    public String getDescription() {
        return description;
    }

    public abstract double cost();

    public void beverageSummary() {
        System.out.format("This is a(n) %s. The total cost is %.2f.\n", getDescription(), cost());
    }
}

// Concrete Beverage classes
class Espresso extends Beverage {
    public Espresso() {
        description = "Espresso";
    }

    @Override
    public double cost() {
        return 2.25;
    }
}

class HouseBlend extends Beverage {
    public HouseBlend() {
        description = "House Blend Coffee";
    }

    @Override
    public double cost() {
        return 2.93;
    }
}
