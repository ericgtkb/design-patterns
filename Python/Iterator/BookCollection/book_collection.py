import abc
from collections import deque


class Book:
    def __init__(self, name: str):
        self._name = name

    def __str__(self):
        return self._name


class CollectionIterator(abc.ABC):
    @abc.abstractmethod
    def first(self) -> None:
        pass

    @abc.abstractmethod
    def next(self) -> None:
        pass

    @abc.abstractmethod
    def is_done(self) -> bool:
        pass

    @abc.abstractmethod
    def current_item(self) -> Book:
        pass


class BookCollection(abc.ABC):
    @abc.abstractmethod
    def create_iterator(self) -> CollectionIterator:
        pass


class ScienceCollection(BookCollection):
    def __init__(self):
        self._books = [Book('Physics'), Book('Math'), Book('Chemistry')]

    def create_iterator(self) -> CollectionIterator:
        return ScienceCollectionIterator(self._books)


class MusicCollection(BookCollection):
    def __init__(self):
        self._books = deque()
        self._books.append(Book('Scales and Modes'))
        self._books.append(Book('Jazz History'))
        self._books.append(Book('Contemporary Harmony'))
        self._books.append(Book('Music Theory'))

    def create_iterator(self) -> CollectionIterator:
        return MusicCollectionIterator(self._books)


class ScienceCollectionIterator(CollectionIterator):
    def __init__(self, books: list):
        self._books = books
        self._current_index = 0

    def first(self) -> None:
        self._current_index = 0

    def next(self) -> None:
        self._current_index += 1

    def is_done(self) -> bool:
        return self._current_index >= len(self._books)

    def current_item(self) -> Book:
        if self.is_done():
            raise Exception('Iterator out of bounds')
        else:
            return self._books[self._current_index]


class MusicCollectionIterator(CollectionIterator):
    def __init__(self, books: deque):
        self._books = books
        self._current_index = 0

    def first(self) -> None:
        self._current_index = 0

    def next(self) -> None:
        self._current_index += 1

    def is_done(self) -> bool:
        return self._current_index >= len(self._books)

    def current_item(self) -> Book:
        if self.is_done():
            raise Exception('Iterator out of bounds')
        else:
            return self._books[self._current_index]


if __name__ == '__main__':
    science = ScienceCollection()
    music = MusicCollection()

    iterator = science.create_iterator()
    print('Iterating through the science collection...')
    while not iterator.is_done():
        print(iterator.current_item())
        iterator.next()

    print()

    print('Iterating through the music collection...')
    iterator = music.create_iterator()
    while not iterator.is_done():
        print(iterator.current_item())
        iterator.next()

    print()
