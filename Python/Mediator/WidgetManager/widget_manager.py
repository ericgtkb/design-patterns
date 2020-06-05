from __future__ import annotations
import abc


class Widget(abc.ABC):
    def __init__(self, manager: WidgetManager):
        self._manager = manager

    def changed(self) -> None:
        self._manager.widget_changed(self)


class TextBox(Widget):
    def __init__(self, manager: WidgetManager, text: str):
        super().__init__(manager)
        self._text = text

    @property
    def text(self):
        return self._text

    @text.setter
    def text(self, text):
        print(f'Setting text to "{text}"...')
        self._text = text
        self.changed()


class DisplayWindow(Widget):
    def __init__(self, manager: WidgetManager):
        super().__init__(manager)

    def display(self, text: str) -> None:
        right_pad = f'{" " * (76 - len(text))}||'
        print('Displaying text...')
        print('=' * 80)
        print(f'||{" " * 76}||')
        print(f'||{text}{right_pad}')
        print(f'||{" " * 76}||')
        print('=' * 80)


class Button(Widget):
    def __init__(self, manager: WidgetManager, name: str):
        super().__init__(manager)
        self._name = name

    def clicked(self) -> None:
        print(f'Button {self._name} clicked...')
        self.changed()


# We have only one mediator, so this interface is not needed
class WidgetManager(abc.ABC):
    @abc.abstractmethod
    def widget_changed(self, widget: Widget):
        pass


class WindowManager(WidgetManager):
    def __init__(self):
        self._text_box = TextBox(self, '')
        self._draw_button = Button(self, 'Draw')
        self._clear_button = Button(self, 'Clear')
        self._display_window = DisplayWindow(self)

    def widget_changed(self, widget: Widget) -> None:
        if widget is self._text_box:
            self._display_window.display(self._text_box.text)
        elif widget is self._draw_button:
            self._display_window.display(self._text_box.text)
        elif widget is self._clear_button:
            self._text_box.text = ''

    @property
    def text_box(self):
        return self._text_box

    @property
    def draw_button(self):
        return self._draw_button

    @property
    def clear_button(self):
        return self._clear_button

    @property
    def display_window(self):
        return self._display_window


if __name__ == '__main__':
    manager = WindowManager()
    manager.text_box.text = 'Mediator pattern!!!'
    manager.draw_button.clicked()
    manager.clear_button.clicked()
    manager.text_box.text = 'Manager is handling the communication between widgets!!!'
    manager.clear_button.clicked()

