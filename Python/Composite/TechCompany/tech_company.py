import abc


class Employee(abc.ABC):
    @abc.abstractmethod
    def show_details(self):
        pass


# Leaf
class Developer(Employee):
    def __init__(self, name: str, employee_id: int, title: str):
        self._name = name
        self._employee_id = employee_id
        self._title = title

    def show_details(self):
        print(f'\t\tDEVELOPER ID: {self._employee_id}, NAME: {self._name}, TITLE: {self._title}')


# Leaf
class Salesperson(Employee):
    def __init__(self, name: str, employee_id: int, title: str):
        self._name = name
        self._employee_id = employee_id
        self._title = title

    def show_details(self):
        print(f'\t\tSALESPERSON ID: {self._employee_id}, NAME: {self._name}, TITLE: {self._title}')


# Composite
class Manager(Employee):
    def __init__(self, name: str, employee_id: int, title: str):
        self._name = name
        self._employee_id = employee_id
        self._title = title
        self._employees = set()

    def add_employee(self, employee: Employee) -> None:
        self._employees.add(employee)

    def remove_employee(self, employee: Employee) -> None:
        self._employees.remove(employee)

    def show_details(self):
        print(f'\tMANAGER ID: {self._employee_id}, NAME: {self._name}, TITLE: {self._title}')
        for employee in self._employees:
            employee.show_details()


# Composite
# This can just be a manager object
class CEO(Employee):
    def __init__(self, name: str, employee_id: int, title: str):
        self._name = name
        self._employee_id = employee_id
        self._title = title
        self._employees = set()

    def add_employee(self, employee: Employee) -> None:
        self._employees.add(employee)

    def remove_employee(self, employee: Employee) -> None:
        self._employees.remove(employee)

    def show_details(self):
        print(f'CEO ID: {self._employee_id}, NAME: {self._name}, TITLE: {self._title}')
        for employee in self._employees:
            employee.show_details()


if __name__ == '__main__':
    print('=' * 25 + 'Tech Company' + '=' * 25)

    ceo = CEO('Eric', 0, 'Chief Executive Officer')

    project_manager = Manager('Alice', 1, 'Senior Project Manager')
    sales_manager = Manager('Bob', 2, 'Sales Manager')

    ceo.add_employee(project_manager)
    ceo.add_employee(sales_manager)

    developer1 = Developer('Chris', 3, 'iOS developer')
    developer2 = Developer('Diane', 4, 'Android developer')

    project_manager.add_employee(developer1)
    project_manager.add_employee(developer2)

    sales1 = Salesperson('Eddy', 5, 'Regional Sales Representative')
    sales2 = Salesperson('Fiona', 6, 'Regional Sales Associate')

    sales_manager.add_employee(sales1)
    sales_manager.add_employee(sales2)

    ceo.show_details()
    print()

    print('Eddy was fired...')
    sales_manager.remove_employee(sales1)
    print()

    ceo.show_details()
    print()

    print('Gina was hired...')
    developer3 = Developer('Gina', 7, 'Web Developer')
    project_manager.add_employee(developer3)
    print()

    ceo.show_details()
    print()

