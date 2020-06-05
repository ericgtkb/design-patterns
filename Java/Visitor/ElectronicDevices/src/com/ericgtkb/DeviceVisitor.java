package com.ericgtkb;

public interface DeviceVisitor {
    void visit(Laptop laptop);
    void visit(TV tv);
    void visit(VideoGameConsole videoGameConsole);
}

class PriceVisitor implements DeviceVisitor {
    private double totalPrice;

    public PriceVisitor() {
        totalPrice = 0;
    }

    @Override
    public void visit(Laptop laptop) {
        totalPrice += laptop.getPrice();
    }

    @Override
    public void visit(TV tv) {
        totalPrice += tv.getPrice();
    }

    @Override
    public void visit(VideoGameConsole videoGameConsole) {
        totalPrice += videoGameConsole.getPrice();
    }

    void summary() {
        System.out.println("Total cost for your electronic devices is $" + totalPrice + ".");
    }
}

class PowerConsumptionVisitor implements DeviceVisitor {
    private double totalPower;

    public PowerConsumptionVisitor() {
        totalPower = 0;
    }

    @Override
    public void visit(Laptop laptop) {
        totalPower += laptop.getPower();
    }

    @Override
    public void visit(TV tv) {
        totalPower += tv.getPower();
    }

    @Override
    public void visit(VideoGameConsole videoGameConsole) {
        totalPower += videoGameConsole.getPower();
    }

    void summary() {
        System.out.println("Total power consumption for your electronic devices is " + totalPower + " watts.");
    }
}
