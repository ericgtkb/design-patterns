# Strategy: Define a family of algorithms, encapsulate each one, and make them interchangeable.
# Strategy lets the algorithm vary independently from clients that use it.

# In python, we don't need the strategy interface. Here we use functions directly.
import abc


# Abstract Duck class
class Duck(abc.ABC):
    def __init__(self):
        self.fly = None
        self.quack = None

    @abc.abstractmethod
    def display(self):
        pass

    def perform_fly(self):
        self.fly()

    def perform_quack(self):
        self.quack()

    def set_fly(self, f):
        self.fly = f

    def set_quack(self, q):
        self.quack = q

    def swim(self):
        print("All ducks swim... or float???")


# Concrete Duck classes
class MallardDuck(Duck):
    def __init__(self):
        super().__init__()
        self.fly = fly_with_wings
        self.quack = quack

    def display(self):
        print("I am a mallard duck!!!")


class ModelDuck(Duck):
    def __init__(self):
        super().__init__()
        self.fly = fly_no_way
        self.quack = mute_quack

    def display(self):
        print("I am a model duck. I can't do anything...")


# fly functions
def fly_with_wings():
    print("I have wings! I'm flying high!!!")


def fly_no_way():
    print("I don't have wings... I can't fly...")


# quack functions
def quack():
    print("Quack!!!")


def mute_quack():
    print("...")


def squeak():
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

    def fly_rocket_powered():
        print("I'm flying with a rocket!!!")

    model.set_fly(fly_rocket_powered)
    model.perform_fly()

