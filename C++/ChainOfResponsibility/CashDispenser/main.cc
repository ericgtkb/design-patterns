#include "cash_dispenser.h"

int main() {
    CashDispenser dispenser{};
    dispenser.dispense(532);
    dispenser.dispense(3045);
    dispenser.dispense(176);

    return 0;
}
