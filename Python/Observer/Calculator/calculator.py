# Observer: Define a one-to-many dependency between objects so that when one object
# changes state, all its dependents are notified and updated automatically.
import abc


# Interface
class Subject(abc.ABC):
    @abc.abstractmethod
    def add_observer(self, observer):
        pass

    @abc.abstractmethod
    def remove_observer(self, observer):
        pass

    @abc.abstractmethod
    def notify_observers(self):
        pass


# Interface
class Observer(abc.ABC):
    @abc.abstractmethod
    def update(self):
        pass


# Interface
class Display(abc.ABC):
    @abc.abstractmethod
    def display(self):
        pass


# DataSource implements Subject
class DataSource(Subject):
    def __init__(self):
        self._observers = set()
        self._a = 0
        self._b = 0

    @property
    def a(self):
        return self._a

    @property
    def b(self):
        return self._b

    def update_data(self, a, b):
        self._a = a
        self._b = b
        self.notify_observers()

    def add_observer(self, observer):
        self._observers.add(observer)

    def remove_observer(self, observer):
        self._observers.remove(observer)

    def notify_observers(self):
        for observer in self._observers:
            observer.update()


# Add class implements Observer, calculates the sum of a and b whenever data is updated
class Add(Observer, Display):
    def __init__(self, data_source):
        self._data_source = data_source
        data_source.add_observer(self)
        self._a = 0
        self._b = 0
        self._sum = 0

    def calculate_sum(self):
        self._sum = self._a + self._b

    def update(self):
        self._a = self._data_source.a
        self._b = self._data_source.b
        self.calculate_sum()
        self.display()

    def display(self):
        print("Calculating sum...")
        print("a = {}\nb = {}\na + b = {}".format(self._a, self._b, self._sum))


# Average class implements Observer, calculates the average of a and b seen so far from data
class Average(Observer, Display):
    def __init__(self, data_source):
        self._data_source = data_source
        data_source.add_observer(self)
        self._a_ave = 0
        self._b_ave = 0
        self._count = 0

    def calculate_average(self, a, b):
        self._a_ave = (self._a_ave * self._count + a) / (self._count + 1)
        self._b_ave = (self._b_ave * self._count + b) / (self._count + 1)
        self._count += 1

    def update(self):
        self.calculate_average(self._data_source.a, self._data_source.b)
        self.display()

    def display(self):
        print("Calculating average...")
        print("The average of a so far is: {:.3f}\nThe average of b so far is: {:.3f}".format(self._a_ave, self._b_ave))


if __name__ == '__main__':
    ds = DataSource()
    add_display = Add(ds)
    average_display = Average(ds)
    ds.update_data(1, 4)
    ds.update_data(2, 5)
    ds.remove_observer(add_display)
    ds.update_data(12, 1)


