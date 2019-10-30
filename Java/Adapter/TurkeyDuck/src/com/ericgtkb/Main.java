package com.ericgtkb;

public class Main {
    private static void useDuck(Duck duck) {
        duck.quack();
        duck.fly();
    }

    public static void main(String[] args) {
        Duck duck = new MallardDuck();

        WildTurkey turkey = new WildTurkey();
        Duck turkeyDuck = new TurkeyAdapter(turkey);

        System.out.println("The turkey says...");
        turkey.gobble();
        turkey.fly();

        System.out.println("\nThe duck says...");
        useDuck(duck);

        System.out.println("\nThe turkey duck says...");
        useDuck(turkeyDuck);
    }
}
