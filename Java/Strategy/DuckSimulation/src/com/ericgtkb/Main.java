package com.ericgtkb;


public class Main {
    private static void testDuck(Duck duck) {
        System.out.println("==================================================");
        duck.display();
        duck.swim();
        duck.performFly();
        duck.performQuack();
        System.out.println("==================================================");
    }

    public static void main(String[] args) {
        Duck mallard = new MallardDuck();
        Duck model = new ModelDuck();
        testDuck(mallard);
        testDuck(model);
        System.out.println("Giving model duck the ability to fly on a rocket!!!");
        model.setFlyBehavior(new FlyBehavior() {
            @Override
            public void fly() {
                System.out.println("I am flying on a rocket!!!");
            }
        });

        testDuck(model);

        System.out.println("Giving model duck the ability to glide using lambda");
        model.setFlyBehavior(() -> System.out.println("I am gliding!!!"));

        testDuck(model);

    }
}
