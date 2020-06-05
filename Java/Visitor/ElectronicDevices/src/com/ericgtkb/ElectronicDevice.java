package com.ericgtkb;

public interface ElectronicDevice {
    void accept(DeviceVisitor visitor);
}

class Laptop implements ElectronicDevice {
    private double price;
    private double power;

    public Laptop() {
        price = 499.99;
        power = 70;
    }

    public double getPrice() {
        return price;
    }

    public double getPower() {
        return power;
    }

    @Override
    public void accept(DeviceVisitor visitor) {
        visitor.visit(this);
    }
}

class TV implements ElectronicDevice {
    private double price;
    private double power;

    public TV() {
        price = 339.99;
        power = 140;
    }

    public double getPrice() {
        return price;
    }

    public double getPower() {
        return power;
    }

    @Override
    public void accept(DeviceVisitor visitor) {
        visitor.visit(this);
    }
}

class VideoGameConsole implements ElectronicDevice {
    private double price;
    private double power;

    public VideoGameConsole() {
        price = 435.95;
        power = 12;
    }

    public double getPrice() {
        return price;
    }

    public double getPower() {
        return power;
    }

    @Override
    public void accept(DeviceVisitor visitor) {
        visitor.visit(this);
    }
}



