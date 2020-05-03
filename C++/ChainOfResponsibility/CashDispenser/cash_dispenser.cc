#include <iostream>
#include <string>
#include "cash_dispenser.h"


CashDispenser::CashDispenser() : chain(), chain50(), chain20(), chain5(), chain1() {
    chain.set_next_chain(&chain50);
    chain50.set_next_chain(&chain20);
    chain20.set_next_chain(&chain5);
    chain5.set_next_chain(&chain1);
}

void CashDispenser::dispense(int amount) {
    std::cout << std::string(50, '=') << '\n';
    std::cout << "Dispensing cash of the amount $" << amount << "...\n";
    chain.dispense(amount);
    std::cout << '\n';
}
