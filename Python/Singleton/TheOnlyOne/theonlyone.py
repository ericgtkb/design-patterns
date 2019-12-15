# TODO: Other safer and more pythonic implementations.


class TheOnlyOne:
    __only_instance = None

    def __new__(cls, *args, **kwargs):
        if not cls.__only_instance:
            print('No instance exists yet, creating the only instance...')
            cls.__only_instance = super().__new__(cls)
        print('This is the only instance!')
        return cls.__only_instance


if __name__ == '__main__':
    the_only_one = TheOnlyOne()
    another_one = TheOnlyOne()
    print(the_only_one)
    print(another_one)
