package com.ericgtkb;

public class CashDispenser {
    private DispenseChain chain;

    public CashDispenser() {
        chain = new DispenseChain100Dollar();
        DispenseChain chain50 = new DispenseChain50Dollar();
        DispenseChain chain20 = new DispenseChain20Dollar();
        DispenseChain chain5 = new DispenseChain5Dollar();
        DispenseChain chain1 = new DispenseChain1Dollar();

        chain.setNextChain(chain50);
        chain50.setNextChain(chain20);
        chain20.setNextChain(chain5);
        chain5.setNextChain(chain1);
    }

    public void dispense(int amount) {
        System.out.println("==================================================");
        System.out.println("Dispensing cash of the amount $" + amount + "...");
        chain.dispense(amount);
        System.out.println();
    }
}
