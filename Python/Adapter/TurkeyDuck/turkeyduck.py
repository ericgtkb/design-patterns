import abc


class Duck(abc.ABC):
    @abc.abstractmethod
    def quack(self):
        pass

    @abc.abstractmethod
    def fly(self):
        pass


class MallardDuck(Duck):
    def quack(self):
        print('Quack!')

    def fly(self):
        print('I am flying')


class Turkey(abc.ABC):
    @abc.abstractmethod
    def gobble(self):
        pass

    @abc.abstractmethod
    def fly(self):
        pass


class WildTurkey(Turkey):
    def gobble(self):
        print('Gobble gobble!')

    def fly(self):
        print('I am flying a short distance...')


class TurkeyAdapter(Duck):
    def __init__(self, turkey: Turkey):
        self.turkey = turkey

    def quack(self):
        self.turkey.gobble()

    def fly(self):
        for _ in range(5):
            self.turkey.fly()


def use_duck(duck: Duck) -> None:
    duck.quack()
    duck.fly()


if __name__ == '__main__':
    duck = MallardDuck()

    turkey = WildTurkey()
    turkey_duck = TurkeyAdapter(turkey)
    print('The turkey says...')
    turkey.gobble()
    turkey.fly()

    print('\nThe duck says...')
    use_duck(duck)

    print('\nThe turkey duck says...')
    use_duck(turkey_duck)

