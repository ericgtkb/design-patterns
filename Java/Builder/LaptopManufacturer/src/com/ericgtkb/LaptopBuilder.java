package com.ericgtkb;

public interface LaptopBuilder {
    void setLaptopName();
    void installCpu();
    void installMemory();
    void installOs();
    Laptop getLaptop();
}

class MacbookBuilder implements LaptopBuilder {
    private Laptop laptop;

    public MacbookBuilder() {
        laptop = new Laptop();
    }

    @Override
    public void setLaptopName() {
        laptop.setName("Macbook");
    }

    @Override
    public void installCpu() {
        laptop.setCpu("Intel i7");
    }

    @Override
    public void installMemory() {
        laptop.setMemory("16 GB");
    }

    @Override
    public void installOs() {
        laptop.setOs("macOS");
    }

    @Override
    public Laptop getLaptop() {
        return laptop;
    }
}

class LinuxLaptopBuilder implements LaptopBuilder {
    private Laptop laptop;

    public LinuxLaptopBuilder() {
        laptop = new Laptop();
    }

    @Override
    public void setLaptopName() {
        laptop.setName("Linux laptop");
    }

    @Override
    public void installCpu() {
        laptop.setCpu("Intel i9");
    }

    @Override
    public void installMemory() {
        laptop.setMemory("32 GB");
    }

    @Override
    public void installOs() {
        laptop.setOs("linux (Ubuntu)");
    }

    @Override
    public Laptop getLaptop() {
        return laptop;
    }
}


class WindowsLaptopBuilder implements LaptopBuilder {
    private Laptop laptop;

    public WindowsLaptopBuilder() {
        laptop = new Laptop();
    }

    @Override
    public void setLaptopName() {
        laptop.setName("Windows laptop");
    }

    @Override
    public void installCpu() {
        laptop.setCpu("Intel i5");
    }

    @Override
    public void installMemory() {
        laptop.setMemory("16 GB");
    }

    @Override
    public void installOs() {
        laptop.setOs("windows 10");
    }

    @Override
    public Laptop getLaptop() {
        return laptop;
    }
}
