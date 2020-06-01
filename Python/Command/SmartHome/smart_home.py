import abc
from typing import Dict

# Note that in python instead of giving invoker command objects, we can give invoker command functions.
# The command interface here is not required


# Receiver
class Light:
    def on(self):
        print('Turning the light on...')

    def off(self):
        print('Turning the light off...')


# Receiver
class TV:
    def on(self):
        print('Turning the tv on...')

    def switch_channel(self, channel_number: int) -> None:
        if channel_number < 0 or channel_number > 100:
            print('Channel number out of range...\nSwitching to channel 0...')
        else:
            print(f'Switching to channel {channel_number}...')

    def off(self):
        print('Turning the tv off...')


# Command interface
class Command(abc.ABC):
    @abc.abstractmethod
    def execute(self):
        pass


class LightOnCommand(Command):
    def __init__(self, light: Light):
        self._light = light

    def execute(self):
        self._light.on()


class LightOffCommand(Command):
    def __init__(self, light: Light):
        self._light = light

    def execute(self):
        self._light.off()


class TVOnCommand(Command):
    def __init__(self, tv: TV):
        self._tv = tv

    def execute(self):
        self._tv.on()
        self._switch_channel()

    def _switch_channel(self):
        try:
            channel_number = int(input('Choose a channel...\n'))
        except ValueError:
            print('Invalid channel number...\nSetting channel number to 0...')
            channel_number = 0

        self._tv.switch_channel(channel_number)


class TVOffCommand(Command):
    def __init__(self, tv: TV):
        self._tv = tv

    def execute(self):
        self._tv.off()


# Invoker
class SmartHome:
    def __init__(self):
        self._on_commands: Dict[str, Command] = {}
        self._off_commands: Dict[str, Command] = {}

    def add_command(self, name: str, on_command: Command, off_command: Command) -> None:
        self._on_commands[name] = on_command
        self._off_commands[name] = off_command

    def turn_on(self, name: str) -> None:
        self._on_commands[name].execute()

    def turn_off(self, name: str) -> None:
        self._off_commands[name].execute()


def set_up_smart_home():
    smart_home = SmartHome()
    light = Light()
    tv = TV()

    light_on_command = LightOnCommand(light)
    light_off_command = LightOffCommand(light)

    tv_on_command = TVOnCommand(tv)
    tv_off_command = TVOffCommand(tv)

    smart_home.add_command('light', light_on_command, light_off_command)
    smart_home.add_command('tv', tv_on_command, tv_off_command)

    return smart_home


if __name__ == '__main__':
    home = set_up_smart_home()
    home.turn_on('light')
    home.turn_on('tv')

    home.turn_off('tv')
    home.turn_off('light')

