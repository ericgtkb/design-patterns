import abc


class Button(abc.ABC):
    @abc.abstractmethod
    def click(self):
        pass


class WindowsStyleButton(Button):
    def click(self):
        print('This Windows-style button is clicked!!!')


class MacStyleButton(Button):
    def click(self):
        print('This Mac-style button is clicked!!!')


class Scrollbar(abc.ABC):
    @abc.abstractmethod
    def scroll(self):
        pass


class WindowsStyleScrollbar(Scrollbar):
    def scroll(self):
        print('Scrolling this Windows-style scrollbar!!!')


class MacStyleScrollbar(Scrollbar):
    def scroll(self):
        print('Scrolling this Mac-style scrollbar!!!')


class WidgetFactory(abc.ABC):
    # These are factory methods
    @abc.abstractmethod
    def create_button(self) -> Button:
        pass

    @abc.abstractmethod
    def create_scrollbar(self) -> Scrollbar:
        pass


class WindowWidgetFactory(WidgetFactory):
    def create_button(self) -> Button:
        return WindowsStyleButton()

    def create_scrollbar(self) -> Scrollbar:
        return WindowsStyleScrollbar()


class MacWidgetFactory(WidgetFactory):
    def create_button(self) -> Button:
        return MacStyleButton()

    def create_scrollbar(self) -> Scrollbar:
        return MacStyleScrollbar()


def get_factory(factory_type: str) -> WidgetFactory:
    if factory_type.lower() == 'windows':
        return WindowWidgetFactory()
    elif factory_type.lower() == 'mac':
        return MacWidgetFactory()
    else:
        raise Exception('Unknown factory type...')


if __name__ == '__main__':
    factory = get_factory('Windows')
    button = factory.create_button()
    scrollbar = factory.create_scrollbar()

    button.click()
    scrollbar.scroll()
    print()

    factory = get_factory('Mac')
    button = factory.create_button()
    scrollbar = factory.create_scrollbar()

    button.click()
    scrollbar.scroll()
    print()
