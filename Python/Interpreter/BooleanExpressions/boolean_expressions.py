from __future__ import annotations
import abc


class Context:
    def __init__(self):
        self._variable_assignments = {}

    def assign(self, variable: VariableExpression, value: bool) -> None:
        self._variable_assignments[variable.name] = value

    def lookup(self, name: str) -> bool:
        return self._variable_assignments[name]

    def show_assignments(self) -> None:
        print('Boolean values for the variables are:')
        for key, val in self._variable_assignments.items():
            print(f'{key} = {val}')


class BooleanExpression(abc.ABC):
    @abc.abstractmethod
    def evaluate(self, context: Context) -> bool:
        pass

    def __and__(self, expression: BooleanExpression) -> BooleanExpression:
        return AndExpression(self, expression)

    def __or__(self, expression: BooleanExpression) -> BooleanExpression:
        return OrExpression(self, expression)

    def __invert__(self) -> BooleanExpression:
        return NotExpression(self)


class VariableExpression(BooleanExpression):
    def __init__(self, name):
        self._name = name

    def evaluate(self, context: Context) -> bool:
        return context.lookup(self._name)

    @property
    def name(self):
        return self._name

    def __str__(self) -> str:
        return self._name


class AndExpression(BooleanExpression):
    def __init__(self, expression1: BooleanExpression, expression2: BooleanExpression):
        self._expression1 = expression1
        self._expression2 = expression2

    def evaluate(self, context: Context) -> bool:
        return self._expression1.evaluate(context) and self._expression2.evaluate(context)

    def __str__(self) -> str:
        return f'({self._expression1} and {self._expression2})'


class OrExpression(BooleanExpression):
    def __init__(self, expression1: BooleanExpression, expression2: BooleanExpression):
        self._expression1 = expression1
        self._expression2 = expression2

    def evaluate(self, context: Context) -> bool:
        return self._expression1.evaluate(context) or self._expression2.evaluate(context)

    def __str__(self) -> str:
        return f'({self._expression1} or {self._expression2})'


class NotExpression(BooleanExpression):
    def __init__(self, expression: BooleanExpression):
        self._expression = expression

    def evaluate(self, context: Context) -> bool:
        return not self._expression.evaluate(context)

    def __str__(self) -> str:
        return f'not {self._expression}'


def main():
    context = Context()

    x = VariableExpression('x')
    y = VariableExpression('y')
    z = VariableExpression('z')

    context.assign(x, False)
    context.assign(y, False)
    context.assign(z, True)

    # not (((x and y) or z) and (y and z))
    expression = ~(((x & y) | z) & (y & z))

    context.show_assignments()
    print(f'{expression} = {expression.evaluate(context)}')

    print('Reassigning variables...')
    context.assign(x, True)
    context.assign(y, True)
    context.assign(z, True)

    context.show_assignments()
    print(f'{expression} = {expression.evaluate(context)}')


if __name__ == '__main__':
    main()
    
