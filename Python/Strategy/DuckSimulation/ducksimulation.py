# Strategy: Define a family of algorithms, encapsulate each one, and make them interchangeable.
# Strategy lets the algorithm vary independently from clients that use it.
import abc


# Abstract Duck class
class Duck(abc.ABC):
    def __init__(self):
        self.fly_behavior = None
        self.quack_behavior = None

    @abc.abstractmethod
    def display(self):
        pass

    def perform_fly(self):
        self.fly_behavior.fly()

    def perform_quack(self):
        self.quack_behavior.quack()

    def set_fly_behavior(self, fb):
        self.fly_behavior = fb

    def set_quack_behavior(self, qb):
        self.quack_behavior = qb

    def swim(self):
        print("All ducks swim... or float???")


# Concrete Duck classes
class MallardDuck(Duck):
    def __init__(self):
        super().__init__()
        self.fly_behavior = FlyWithWings()
        self.quack_behavior = Quack()

    def display(self):
        print("I am a mallard duck!!!")


class ModelDuck(Duck):
    def __init__(self):
        super().__init__()
        self.fly_behavior = FlyNoWay()
        self.quack_behavior = MuteQuack()

    def display(self):
        print("I am a model duck. I can't do anything...")


# Interface FlyBehavior
class FlyBehavior(abc.ABC):
    @abc.abstractmethod
    def fly(self):
        pass


# Concrete FlyBehavior classes
class FlyWithWings(FlyBehavior):
    def fly(self):
        print("I have wings! I'm flying high!!!")


class FlyNoWay(FlyBehavior):
    def fly(self):
        print("I don't have wings... I can't fly...")


# Interface QuackBehavior
class QuackBehavior(abc.ABC):
    @abc.abstractmethod
    def quack(self):
        pass


# Concrete QuackBehavior classes
class Quack(QuackBehavior):
    def quack(self):
        print("Quack!!!")


class MuteQuack(QuackBehavior):
    def quack(self):
        print("...")


class Squeak(QuackBehavior):
    def quack(self):
        print("Squeak!!!")


if __name__ == '__main__':
    mallard = MallardDuck()
    mallard.display()
    mallard.swim()
    mallard.perform_fly()
    mallard.perform_quack()

    model = ModelDuck()
    model.display()
    model.swim()
    model.perform_fly()
    model.perform_quack()

    print("Giving the model duck the ability to fly on a rocket...")

    class FlyRocketPowered(FlyBehavior):
        def fly(self):
            print("I'm flying with a rocket!!!")

    model.set_fly_behavior(FlyRocketPowered())
    model.perform_fly()

