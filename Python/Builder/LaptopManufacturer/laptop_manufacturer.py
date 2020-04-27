import abc


# The traditional builder pattern is not as useful in python,
# but this is an implementation in the traditional way.
class Laptop:
    def __init__(self):
        self._name = None
        self._cpu = None
        self._memory = None
        self._os = None

    @property
    def name(self):
        return self._name

    @name.setter
    def name(self, name):
        self._name = name

    @property
    def cpu(self):
        return self._cpu

    @cpu.setter
    def cpu(self, cpu):
        self._cpu = cpu

    @property
    def memory(self):
        return self._memory

    @memory.setter
    def memory(self, memory):
        self._memory = memory

    @property
    def os(self):
        return self._os

    @os.setter
    def os(self, os):
        self._os = os

    def show_spec(self):
        print('=' * 50)
        print(f'This is a {self._name},')
        print(f'with a {self._cpu} cpu,')
        print(f'with {self._memory} of memory,')
        print(f'running a {self._os} operating system.')
        print()


class LaptopBuilder(abc.ABC):
    @abc.abstractmethod
    def set_laptop_name(self):
        pass

    @abc.abstractmethod
    def install_cpu(self):
        pass

    @abc.abstractmethod
    def install_memory(self):
        pass

    @abc.abstractmethod
    def install_os(self):
        pass

    @abc.abstractmethod
    def get_laptop(self):
        pass


class MacbookBuilder(LaptopBuilder):
    def __init__(self):
        self._laptop = Laptop()

    def set_laptop_name(self):
        self._laptop.name = 'Macbook'

    def install_cpu(self):
        self._laptop.cpu = 'Intel i7'

    def install_memory(self):
        self._laptop.memory = '16 GB'

    def install_os(self):
        self._laptop.os = 'macOS'

    def get_laptop(self):
        return self._laptop


class LinuxLaptopBuilder(LaptopBuilder):
    def __init__(self):
        self._laptop = Laptop()

    def set_laptop_name(self):
        self._laptop.name = 'Linux laptop'

    def install_cpu(self):
        self._laptop.cpu = 'Intel i9'

    def install_memory(self):
        self._laptop.memory = '32 GB'

    def install_os(self):
        self._laptop.os = 'linux (Ubuntu)'

    def get_laptop(self):
        return self._laptop


class WindowsLaptopBuilder(LaptopBuilder):
    def __init__(self):
        self._laptop = Laptop()

    def set_laptop_name(self):
        self._laptop.name = 'Window laptop'

    def install_cpu(self):
        self._laptop.cpu = 'Intel i5'

    def install_memory(self):
        self._laptop.memory = '16 GB'

    def install_os(self):
        self._laptop.os = 'windows 10'

    def get_laptop(self):
        return self._laptop


class LaptopManufacturer:
    def __init__(self, builder: LaptopBuilder):
        self._builder = builder

    @property
    def builder(self):
        return self._builder

    @builder.setter
    def builder(self, builder: LaptopBuilder):
        self._builder = builder

    def build_laptop(self):
        self._builder.set_laptop_name()
        self._builder.install_cpu()
        self._builder.install_memory()
        self._builder.install_os()

    def deliver_laptop(self):
        return self._builder.get_laptop()


if __name__ == '__main__':
    macbook_builder = MacbookBuilder()
    linux_builder = LinuxLaptopBuilder()
    windows_builder = WindowsLaptopBuilder()

    manufacturer = LaptopManufacturer(macbook_builder)
    manufacturer.build_laptop()
    laptop = manufacturer.deliver_laptop()
    laptop.show_spec()

    manufacturer.builder = linux_builder
    manufacturer.build_laptop()
    laptop = manufacturer.deliver_laptop()
    laptop.show_spec()

    manufacturer.builder = windows_builder
    manufacturer.build_laptop()
    laptop = manufacturer.deliver_laptop()
    laptop.show_spec()

