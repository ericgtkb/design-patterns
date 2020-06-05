from __future__ import annotations
import abc


class ElectronicDevice(abc.ABC):
    @abc.abstractmethod
    def accept(self, visitor: DeviceVisitor) -> None:
        pass


class Laptop(ElectronicDevice):
    def __init__(self):
        self.price = 499.99
        self.power = 70

    def accept(self, visitor: DeviceVisitor) -> None:
        visitor.visit_laptop(self)


class TV(ElectronicDevice):
    def __init__(self):
        self.price = 339.99
        self.power = 140

    def accept(self, visitor: DeviceVisitor) -> None:
        visitor.visit_tv(self)


class VideoGameConsole(ElectronicDevice):
    def __init__(self):
        self.price = 435.95
        self.power = 12

    def accept(self, visitor: DeviceVisitor) -> None:
        visitor.visit_video_game_console(self)


class DeviceVisitor(abc.ABC):
    @abc.abstractmethod
    def visit_laptop(self, laptop: Laptop) -> None:
        pass

    @abc.abstractmethod
    def visit_tv(self, tv: TV) -> None:
        pass

    @abc.abstractmethod
    def visit_video_game_console(self, video_game_console: VideoGameConsole) -> None:
        pass


class PriceVisitor(DeviceVisitor):
    def __init__(self):
        self._total_price = 0

    def visit_laptop(self, laptop: Laptop) -> None:
        self._total_price += laptop.price

    def visit_tv(self, tv: TV) -> None:
        self._total_price += tv.price

    def visit_video_game_console(self, video_game_console: VideoGameConsole) -> None:
        self._total_price += video_game_console.price

    def summary(self) -> None:
        print(f'Total cost for your electronic devices is ${self._total_price}.')


class PowerConsumptionVisitor(DeviceVisitor):
    def __init__(self):
        self._total_power = 0

    def visit_laptop(self, laptop: Laptop) -> None:
        self._total_power += laptop.power

    def visit_tv(self, tv: TV) -> None:
        self._total_power += tv.power

    def visit_video_game_console(self, video_game_console: VideoGameConsole) -> None:
        self._total_power += video_game_console.power

    def summary(self) -> None:
        print(f'Total power consumption for your electronic devices is {self._total_power} watts.')


def main():
    electronic_devices = [TV(), Laptop(), VideoGameConsole(), Laptop()]

    price_visitor = PriceVisitor()
    power_consumption_visitor = PowerConsumptionVisitor()

    print('Visiting the devices one by one...')
    for device in electronic_devices:
        device.accept(price_visitor)
        device.accept(power_consumption_visitor)

    print('Here\'s a summary the visitors got:')
    price_visitor.summary()
    power_consumption_visitor.summary()


if __name__ == '__main__':
    main()
