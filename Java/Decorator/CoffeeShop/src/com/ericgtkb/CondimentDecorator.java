package com.ericgtkb;

public abstract class CondimentDecorator extends Beverage {
    public abstract String getDescription();
}


// Concrete decorator classes
class Mocha extends CondimentDecorator {
    Beverage beverage;

    public Mocha(Beverage beverage) {
        this.beverage = beverage;
    }

    @Override
    public String getDescription() {
        return "Mocha " + beverage.getDescription();
    }

    @Override
    public double cost() {
        return beverage.cost() + 0.33;
    }
}


class Soy extends CondimentDecorator {
    Beverage beverage;

    public Soy(Beverage beverage) {
        this.beverage = beverage;
    }

    @Override
    public String getDescription() {
        return "Soy " + beverage.getDescription();
    }

    @Override
    public double cost() {
        return beverage.cost() + 0.50;
    }
}