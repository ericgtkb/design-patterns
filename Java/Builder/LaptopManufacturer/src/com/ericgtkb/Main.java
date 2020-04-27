package com.ericgtkb;

public class Main {

    public static void main(String[] args) {
        LaptopBuilder macbookBuilder = new MacbookBuilder();
        LaptopBuilder linuxBuilder = new LinuxLaptopBuilder();
        LaptopBuilder windowsBuilder = new WindowsLaptopBuilder();

        LaptopManufacturer manufacturer = new LaptopManufacturer(macbookBuilder);

        manufacturer.buildLaptop();
        Laptop laptop = manufacturer.deliverLaptop();
        laptop.showSpecs();

        manufacturer.setBuilder(linuxBuilder);
        manufacturer.buildLaptop();
        laptop = manufacturer.deliverLaptop();
        laptop.showSpecs();

        manufacturer.setBuilder(windowsBuilder);
        manufacturer.buildLaptop();
        laptop = manufacturer.deliverLaptop();
        laptop.showSpecs();


    }
}
