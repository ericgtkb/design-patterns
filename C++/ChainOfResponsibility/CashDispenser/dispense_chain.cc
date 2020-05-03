#include <iostream>
#include "dispense_chain.h"


void DispenseChain100Dollar::set_next_chain(DispenseChain* chain) {
    next_chain = chain;
}

void DispenseChain100Dollar::dispense(int amount) {
    if (amount >= 100) {
        int num = amount / 100;
        int remainder = amount % 100;

        std::cout << "Dispensing " << num << " 100 dollar bill(s)" << "\n";

        if (remainder != 0) {
            next_chain->dispense(remainder);
        }
    } else {
        next_chain->dispense(amount);
    }
}


void DispenseChain50Dollar::set_next_chain(DispenseChain* chain) {
    next_chain = chain;
}

void DispenseChain50Dollar::dispense(int amount) {
    if (amount >= 50) {
        int num = amount / 50;
        int remainder = amount % 50;

        std::cout << "Dispensing " << num << " 50 dollar bill(s)" << "\n";

        if (remainder != 0) {
            next_chain->dispense(remainder);
        }
    } else {
        next_chain->dispense(amount);
    }
}


void DispenseChain20Dollar::set_next_chain(DispenseChain* chain) {
    next_chain = chain;
}

void DispenseChain20Dollar::dispense(int amount) {
    if (amount >= 20) {
        int num = amount / 20;
        int remainder = amount % 20;

        std::cout << "Dispensing " << num << " 20 dollar bill(s)" << "\n";

        if (remainder != 0) {
            next_chain->dispense(remainder);
        }
    } else {
        next_chain->dispense(amount);
    }
}


void DispenseChain5Dollar::set_next_chain(DispenseChain* chain) {
    next_chain = chain;
}

void DispenseChain5Dollar::dispense(int amount) {
    if (amount >= 5) {
        int num = amount / 5;
        int remainder = amount % 5;

        std::cout << "Dispensing " << num << " 5 dollar bill(s)" << "\n";

        if (remainder != 0) {
            next_chain->dispense(remainder);
        }
    } else {
        next_chain->dispense(amount);
    }
}


void DispenseChain1Dollar::set_next_chain(DispenseChain* chain) {
    next_chain = chain;
}

void DispenseChain1Dollar::dispense(int amount) {
    if (amount >= 1) {
        int num = amount / 1;
        int remainder = amount % 1;

        std::cout << "Dispensing " << num << " 1 dollar bill(s)" << "\n";

        if (remainder != 0) {
            next_chain->dispense(remainder);
        }
    } else {
        next_chain->dispense(amount);
    }
}

