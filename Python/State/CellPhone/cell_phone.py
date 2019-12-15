import abc


class CellPhone:
    def __init__(self, name: str):
        self.name = name
        self.normal_mode = NormalMode(self)
        self.silent_mode = SilentMode(self)
        self.airplane_mode = AirplaneMode(self)
        self.mode = self.normal_mode

    def go_normal(self):
        self.mode = self.normal_mode
        print('Switching to normal mode...')

    def go_silent(self):
        self.mode = self.silent_mode
        print('Switching to silent mode...')

    def go_airplane(self):
        self.mode = self.airplane_mode
        print('Switching to airplane mode...')

    def new_message(self):
        self.mode.new_message()

    def new_phone_call(self):
        self.mode.new_phone_call()

    def new_app_notification(self):
        self.mode.new_app_notification()


class CellPhoneMode(abc.ABC):
    @abc.abstractmethod
    def new_message(self):
        pass

    @abc.abstractmethod
    def new_phone_call(self):
        pass

    @abc.abstractmethod
    def new_app_notification(self):
        pass


class NormalMode(CellPhoneMode):
    def __init__(self, phone: CellPhone):
        self.phone = phone

    def new_message(self):
        print('Beep! {}! You have a new message!'.format(self.phone.name))

    def new_phone_call(self):
        print('Ring ring! {}! You are getting a new phone call!'.format(self.phone.name))

    def new_app_notification(self):
        print('Ding! {}! You have a new app notification!'.format(self.phone.name))


class SilentMode(CellPhoneMode):
    def __init__(self, phone: CellPhone):
        self.phone = phone

    def new_message(self):
        print('Vibrating! {}! You have a new message!'.format(self.phone.name))

    def new_phone_call(self):
        print('Vibrating Vibrating!!! {}! You are getting a new phone call!'.format(self.phone.name))

    def new_app_notification(self):
        print('Vibrating! {}! You have a new app notification!'.format(self.phone.name))


class AirplaneMode(CellPhoneMode):
    def __init__(self, phone: CellPhone):
        self.phone = phone

    def new_message(self):
        print('In airplane mode... Cannot receive any messages...')

    def new_phone_call(self):
        print('In airplane mode... Cannot receive any phone calls...')

    def new_app_notification(self):
        print('... {}! You have a new app notification!'.format(self.phone.name))


if __name__ == '__main__':
    my_phone = CellPhone('Eric')
    my_phone.new_message()
    my_phone.new_phone_call()
    my_phone.new_app_notification()

    print('Going to a meeting...')
    my_phone.go_silent()
    my_phone.new_message()
    my_phone.new_phone_call()
    my_phone.new_app_notification()

    print('Getting on an airplane...')
    my_phone.go_airplane()
    my_phone.new_message()
    my_phone.new_phone_call()
    my_phone.new_app_notification()

    print('Landed at the destination...')
    my_phone.go_normal()
    my_phone.new_message()
    my_phone.new_phone_call()
    my_phone.new_app_notification()
