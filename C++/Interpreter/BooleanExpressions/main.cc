#include <iostream>
#include <memory>
#include "boolean_expression.h"

int main() {
    Context context {};

    auto x = std::make_shared<VariableExpression>("x");
    auto y = std::make_shared<VariableExpression>("y");
    auto z = std::make_shared<VariableExpression>("z");

    context.assign(x.get(), false);
    context.assign(y.get(), false);
    context.assign(z.get(), true);

    // not (((x and y) or z) and (y and z))
    auto expression {~(((x & y) | z) & (y & z))};
    std::cout << std::boolalpha;

    context.show_assignments();
    std::cout << *expression << " = " << expression->evaluate(context) << "\n";

    std::cout << "Reassigning variables...\n";
    context.assign(x.get(), true);
    context.assign(y.get(), true);
    context.assign(z.get(), true);

    context.show_assignments();
    std::cout << *expression << " = " << expression->evaluate(context) << "\n";
    return 0;
}
