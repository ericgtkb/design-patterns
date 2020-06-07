#include <iostream>
#include "context.h"
#include "boolean_expression.h"

Context::Context() : _variable_assignments() {}

void Context::assign(VariableExpression* variable, bool value) {
    _variable_assignments[variable->get_name()] = value;

}

bool Context::lookup(const std::string& name) const {
    return _variable_assignments.at(name);
}

void Context::show_assignments() const {
    std::cout << "Boolean values for the variables are:\n";
    for (auto& [key, val] : _variable_assignments) {
        std::cout << key << " = " << val << "\n";
    }
}
