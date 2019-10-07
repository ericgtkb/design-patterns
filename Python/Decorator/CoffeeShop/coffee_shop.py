import abc


# Abstract beverage
class Beverage(abc.ABC):
    def __init__(self):
        self.description = "Unknown Beverage"

    @abc.abstractmethod
    def cost(self):
        pass

    def beverage_summary(self):
        print("This is a(n) {}. The total cost is {:.2f}.".format(self.description, self.cost()))


# Abstract condiment decorator class
class CondimentDecorator(Beverage):
    def __init__(self, beverage: Beverage):
        super().__init__()
        self.beverage = beverage

    @abc.abstractmethod
    def cost(self):
        return self.beverage.cost()


# Concrete Beverage classes
class Espresso(Beverage):
    def __init__(self):
        super().__init__()
        self.description = "Espresso"

    def cost(self):
        return 2.0


class HouseBlend(Beverage):
    def __init__(self):
        super().__init__()
        self.description = "House Blend Coffee"

    def cost(self):
        return 2.25


# Concrete Condiment classes
class Mocha(CondimentDecorator):
    def __init__(self, beverage: Beverage):
        super().__init__(beverage)
        self.description = "Mocha " + self.beverage.description

    def cost(self):
        return self.beverage.cost() + 0.75


class Soy(CondimentDecorator):
    def __init__(self, beverage: Beverage):
        super().__init__(beverage)
        self.description = "Soy " + self.beverage.description

    def cost(self):
        return self.beverage.cost() + 0.33


if __name__ == '__main__':
    mocha_espresso = Mocha(Espresso())
    mocha_espresso.beverage_summary()

    soy_mocha_house_blend = Soy(Mocha(HouseBlend()))
    soy_mocha_house_blend.beverage_summary()

    mocha_soy_mocha_house_blend = Mocha(soy_mocha_house_blend)
    mocha_soy_mocha_house_blend.beverage_summary()

