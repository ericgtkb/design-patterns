#include "boolean_expression.h"


std::ostream& operator<<(std::ostream& os, const BooleanExpression& expression) {
    expression._to_ostream(os);
    return os;
}

std::shared_ptr<BooleanExpression> operator&(const std::shared_ptr<BooleanExpression>& expression1,
                                             const std::shared_ptr<BooleanExpression>& expression2) {
    return std::make_shared<AndExpression>(expression1, expression2);
}

std::shared_ptr<BooleanExpression> operator|(const std::shared_ptr<BooleanExpression>& expression1,
                                             const std::shared_ptr<BooleanExpression>& expression2) {
    return std::make_shared<OrExpression>(expression1, expression2);
}

std::shared_ptr<BooleanExpression> operator~(const std::shared_ptr<BooleanExpression>& expression) {
    return std::make_shared<NotExpression>(expression);
}


VariableExpression::VariableExpression(const std::string& name) : _name(name) {}

const std::string& VariableExpression::get_name() const {
    return _name;
}

bool VariableExpression::evaluate(Context& context) {
    return context.lookup(_name);
}

void VariableExpression::_to_ostream(std::ostream& os) const {
    os << _name;
}


AndExpression::AndExpression(const std::shared_ptr<BooleanExpression>& expression1,
                             const std::shared_ptr<BooleanExpression>& expression2) : _expression1(expression1),
                                                                                      _expression2(expression2) {}

bool AndExpression::evaluate(Context& context) {
    return _expression1->evaluate(context) && _expression2->evaluate(context);
}

void AndExpression::_to_ostream(std::ostream& os) const {
    os << "(" << *_expression1 << " and " << *_expression2 << ")";
}


OrExpression::OrExpression(const std::shared_ptr<BooleanExpression>& expression1,
                             const std::shared_ptr<BooleanExpression>& expression2) : _expression1(expression1),
                                                                                      _expression2(expression2) {}

bool OrExpression::evaluate(Context& context) {
    return _expression1->evaluate(context) || _expression2->evaluate(context);
}

void OrExpression::_to_ostream(std::ostream& os) const {
    os << "(" << *_expression1 << " or " << *_expression2 << ")";
}


NotExpression::NotExpression(const std::shared_ptr<BooleanExpression>& expression) : _expression(expression) {}

bool NotExpression::evaluate(Context& context) {
    return !_expression->evaluate(context);
}

void NotExpression::_to_ostream(std::ostream& os) const {
    os << "not " << *_expression;
}
