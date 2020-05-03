#ifndef CASHDISPENSER_CASH_DISPENSER_H
#define CASHDISPENSER_CASH_DISPENSER_H


#include <memory>
#include "dispense_chain.h"


class CashDispenser {
public:
    CashDispenser();
    void dispense(int amount);

private:
    // Here I let CashDispenser to manage DispenseChain objects
    // There may be better implementations
    
    // Main chain 100 dollar
    DispenseChain100Dollar chain;
    // 50 dollar
    DispenseChain50Dollar chain50;
    // 20 dollar
    DispenseChain20Dollar chain20;
    // 5 dollar
    DispenseChain5Dollar chain5;
    //1 collar
    DispenseChain1Dollar chain1;

};




#endif // CASHDISPENSER_CASH_DISPENSER_H
