package com.ericgtkb;

public class LaptopManufacturer {
    private LaptopBuilder builder;

    public LaptopManufacturer(LaptopBuilder builder) {
        this.builder = builder;
    }

    public void setBuilder(LaptopBuilder builder) {
        this.builder = builder;
    }

    public void buildLaptop() {
        builder.setLaptopName();
        builder.installCpu();
        builder.installMemory();
        builder.installOs();
    }

    public Laptop deliverLaptop() {
        return builder.getLaptop();
    }
}
