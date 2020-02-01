package com.ericgtkb;

public abstract class House {
    public final void buildHouse() {
        buildFoundation();
        buildPillars();
        buildWalls();
        buildWindows();
        System.out.println("The house is built!");
    }

    // Hook methods
    private void buildFoundation() {
        System.out.println("Building foundation of the house...");
    }

    private void buildWindows() {
        System.out.println("Building glass windows...");
    }

    // Methods to be implemented by subclasses
    public abstract void buildPillars();
    public abstract void buildWalls();
}


class WoodenHouse extends House {
    @Override
    public void buildPillars() {
        System.out.println("Building wooden pillars...");
    }

    @Override
    public void buildWalls() {
        System.out.println("Building wooden walls...");
    }
}


class GlassHouse extends House {
    @Override
    public void buildPillars() {
        System.out.println("Building glass pillars...");
    }

    @Override
    public void buildWalls() {
        System.out.println("Building glass walls...");
    }
}
