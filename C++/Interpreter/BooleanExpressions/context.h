#ifndef BOOLEANEXPRESSIONS_CONTEXT_H
#define BOOLEANEXPRESSIONS_CONTEXT_H


#include <unordered_map>

class VariableExpression;

class Context {
public:
    Context();
    void assign(VariableExpression* variable, bool value);
    bool lookup(const std::string& name) const;
    void show_assignments() const;

private:
    std::unordered_map<std::string, bool> _variable_assignments;

};


#endif //BOOLEANEXPRESSIONS_CONTEXT_H
