import abc
from typing import Optional


class Guitar(abc.ABC):
    def __init__(self):
        self._name = None
        self._body = None
        self._pickup = None
        self._bridge = None

    def assemble(self):
        print(f'Building a(n) {self._name}...')
        print(f'Carving a(n) {self._body} body...')
        print(f'Installing {self._pickup} pickups...')
        print(f'Installing a(n) {self._bridge} bridge...')

    @abc.abstractmethod
    def string_the_guitar(self):
        print('Putting on 0.10 strings...')

    @property
    def name(self):
        return self._name


class GibsonLesPaul(Guitar):
    def __init__(self):
        super().__init__()
        self._name = 'Gibson Les Paul'
        self._body = 'Les Paul'
        self._pickup = 'Humbucker'
        self._bridge = 'fixed'

    def string_the_guitar(self):
        super().string_the_guitar()


class GibsonSG(Guitar):
    def __init__(self):
        super().__init__()
        self._name = 'Gibson SG'
        self._body = 'SG'
        self._pickup = 'Humbucker'
        self._bridge = 'fixed'

    def string_the_guitar(self):
        super().string_the_guitar()


class FenderStratocaster(Guitar):
    def __init__(self):
        super().__init__()
        self._name = 'Fender Stratocaster'
        self._body = 'Stratocaster'
        self._pickup = 'single-coil'
        self._bridge = 'tremolo'

    def string_the_guitar(self):
        print('Putting on 0.09 strings...')


class FenderTelecaster(Guitar):
    def __init__(self):
        super().__init__()
        self._name = 'Fender Telecaster'
        self._body = 'Telecaster'
        self._pickup = 'single-coil'
        self._bridge = 'tremolo'

    def string_the_guitar(self):
        print('Putting on 0.09 strings...')


class GuitarFactory(abc.ABC):
    def get_guitar(self, guitar_type: str) -> Guitar:
        guitar = self._build_guitar(guitar_type)
        guitar.assemble()
        guitar.string_the_guitar()

        return guitar

    # The actual factory method
    @abc.abstractmethod
    def _build_guitar(self, guitar_type: str) -> Optional[Guitar]:
        pass


class GibsonFactory(GuitarFactory):
    def _build_guitar(self, guitar_type: str) -> Optional[Guitar]:
        if guitar_type == 'Les Paul':
            return GibsonLesPaul()
        elif guitar_type == 'SG':
            return GibsonSG()
        else:
            return None


class FenderFactory(GuitarFactory):
    def _build_guitar(self, guitar_type: str) -> Optional[Guitar]:
        if guitar_type == 'Stratocaster':
            return FenderStratocaster()
        elif guitar_type == 'Telecaster':
            return FenderTelecaster()
        else:
            return None


if __name__ == '__main__':
    fender = FenderFactory()
    gibson = GibsonFactory()

    my_guitar = fender.get_guitar('Stratocaster')
    print(f'Just ordered a {my_guitar.name}!!!')
    print()

    my_guitar = fender.get_guitar('Telecaster')
    print(f'Just ordered a {my_guitar.name}!!!')
    print()

    my_guitar = gibson.get_guitar('Les Paul')
    print(f'Just ordered a {my_guitar.name}!!!')
    print()

    my_guitar = gibson.get_guitar('SG')
    print(f'Just ordered a {my_guitar.name}!!!')
    print()
