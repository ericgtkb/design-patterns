import abc


class House(abc.ABC):
    def build_house(self):
        # Can be set as final in python 3.8 using the final decorator
        self.build_foundation()
        self.build_pillars()
        self.build_walls()
        self.build_windows()
        print('The house is built!')

    def build_foundation(self):
        print('Building foundation...')

    def build_windows(self):
        print('Building glass windows...')

    @abc.abstractmethod
    def build_pillars(self):
        pass

    @abc.abstractmethod
    def build_walls(self):
        pass


class WoodenHouse(House):
    def build_pillars(self):
        print('Building wooden pillars...')

    def build_walls(self):
        print('Building wooden walls...')


class GlassHouse(House):
    def build_pillars(self):
        print('Building glass pillars...')

    def build_walls(self):
        print('Building glass walls...')


if __name__ == '__main__':
    house = WoodenHouse()
    house.build_house()
    print('=' * 40)
    house = GlassHouse()
    house.build_house()

