package com.ericgtkb;

import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        List<ElectronicDevice> electronicDevices = new ArrayList<>();
        electronicDevices.add(new TV());
        electronicDevices.add(new Laptop());
        electronicDevices.add(new VideoGameConsole());
        electronicDevices.add(new Laptop());

        PriceVisitor priceVisitor = new PriceVisitor();
        PowerConsumptionVisitor powerConsumptionVisitor = new PowerConsumptionVisitor();

        System.out.println("Visiting the devices one by one...");
        for (var device : electronicDevices) {
            device.accept(priceVisitor);
            device.accept(powerConsumptionVisitor);
        }

        System.out.println("Here's a summary the visitors got:");
        priceVisitor.summary();
        powerConsumptionVisitor.summary();
    }
}
