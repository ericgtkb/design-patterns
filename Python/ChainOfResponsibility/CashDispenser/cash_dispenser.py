import abc


class DispenseChain(abc.ABC):
    @abc.abstractmethod
    def dispense(self, amount):
        pass


class DispenseChain100Dollar(DispenseChain):
    def __init__(self):
        self.next_chain = None

    def dispense(self, amount):
        if amount >= 100:
            num = amount // 100
            remainder = amount % 100

            print(f'Dispensing {num} 100 dollar bill(s)')
            if remainder != 0:
                self.next_chain.dispense(remainder)
        else:
            self.next_chain.dispense(amount)
            

class DispenseChain50Dollar(DispenseChain):
    def __init__(self):
        self.next_chain = None

    def dispense(self, amount):
        if amount >= 50:
            num = amount // 50
            remainder = amount % 50

            print(f'Dispensing {num} 50 dollar bill(s)')
            if remainder != 0:
                self.next_chain.dispense(remainder)
        else:
            self.next_chain.dispense(amount)
            

class DispenseChain20Dollar(DispenseChain):
    def __init__(self):
        self.next_chain = None

    def dispense(self, amount):
        if amount >= 20:
            num = amount // 20
            remainder = amount % 20

            print(f'Dispensing {num} 20 dollar bill(s)')
            if remainder != 0:
                self.next_chain.dispense(remainder)
        else:
            self.next_chain.dispense(amount)
            
class DispenseChain5Dollar(DispenseChain):
    def __init__(self):
        self.next_chain = None

    def dispense(self, amount):
        if amount >= 5:
            num = amount // 5
            remainder = amount % 5

            print(f'Dispensing {num} 5 dollar bill(s)')
            if remainder != 0:
                self.next_chain.dispense(remainder)
        else:
            self.next_chain.dispense(amount)
            

class DispenseChain1Dollar(DispenseChain):
    def __init__(self):
        self.next_chain = None

    def dispense(self, amount):
        if amount >= 1:
            num = amount // 1
            remainder = amount % 1

            print(f'Dispensing {num} 1 dollar bill(s)')
            if remainder != 0:
                self.next_chain.dispense(remainder)
        else:
            self.next_chain.dispense(amount)


class CashDispenser:
    def __init__(self):
        self.chain = DispenseChain100Dollar()
        chain50 = DispenseChain50Dollar()
        chain20 = DispenseChain20Dollar()
        chain5 = DispenseChain5Dollar()
        chain1 = DispenseChain1Dollar()
        
        self.chain.next_chain = chain50
        chain50.next_chain = chain20
        chain20.next_chain = chain5
        chain5.next_chain = chain1

    def dispense(self, amount):
        print('=' * 50)
        print(f'Dispensing cash of the amount ${amount}...')
        self.chain.dispense(amount)
        print()


            
if __name__ == '__main__':
    dispenser = CashDispenser()
    dispenser.dispense(532)
    dispenser.dispense(3045)
    dispenser.dispense(176)
    

