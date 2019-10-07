package com.ericgtkb;

public class Main {

    public static void main(String[] args) {
        Beverage mochaEspresso = new Mocha(new Espresso());
        mochaEspresso.beverageSummary();

        Beverage soyMochaHouseBlend = new Soy(new Mocha(new HouseBlend()));
        soyMochaHouseBlend.beverageSummary();

        Beverage mochaSoyMochaHouseBlend = new Mocha(soyMochaHouseBlend);
        mochaSoyMochaHouseBlend.beverageSummary();

    }
}
