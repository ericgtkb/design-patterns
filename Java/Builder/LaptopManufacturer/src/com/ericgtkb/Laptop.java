package com.ericgtkb;

public class Laptop {
    private String name;
    private String cpu;
    private String memory;
    private String os;

    public void setName(String name) {
        this.name = name;
    }

    public void setCpu(String cpu) {
        this.cpu = cpu;
    }

    public void setMemory(String memory) {
        this.memory = memory;
    }

    public void setOs(String os) {
        this.os = os;
    }

    public void showSpecs() {
        System.out.println("================================================");
        System.out.println("This is a " + name + ",");
        System.out.println("with a " + cpu + " cpu,");
        System.out.println("with " + memory + " of memory,");
        System.out.println("running a " + os + " operating system.");
        System.out.println();
    }
}
