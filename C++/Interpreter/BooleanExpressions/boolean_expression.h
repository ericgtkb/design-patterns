#ifndef BOOLEANEXPRESSIONS_BOOLEAN_EXPRESSION_H
#define BOOLEANEXPRESSIONS_BOOLEAN_EXPRESSION_H

#include <memory>
#include <ostream>
#include "context.h"

class AndExpression;
class OrExpression;
class NotExpression;

class BooleanExpression {
public:
    virtual ~BooleanExpression() = default;
    virtual bool evaluate(Context& context) = 0;
    friend std::ostream& operator<<(std::ostream& os, const BooleanExpression& expression);

protected:
    // The actual function doing the output to ostream
    virtual void _to_ostream(std::ostream& os) const = 0;
};

// Enable the use of &, |, and ~ on shared_ptrs to create new BooleanExpressions
std::shared_ptr<BooleanExpression> operator&(const std::shared_ptr<BooleanExpression>& expression1,
                                             const std::shared_ptr<BooleanExpression>& expression2);
std::shared_ptr<BooleanExpression> operator|(const std::shared_ptr<BooleanExpression>& expression1,
                                             const std::shared_ptr<BooleanExpression>& expression2);
std::shared_ptr<BooleanExpression> operator~(const std::shared_ptr<BooleanExpression>& expression);


class VariableExpression : public BooleanExpression {
public:
    VariableExpression(const std::string& name);
    bool evaluate(Context& context) override;
    const std::string& get_name() const;

protected:
    void _to_ostream(std::ostream& os) const override;

private:
    std::string _name;
};

class AndExpression : public BooleanExpression {
public:
    AndExpression(const std::shared_ptr<BooleanExpression>& expression1,
                  const std::shared_ptr<BooleanExpression>& expression2);
    bool evaluate(Context& context) override;

protected:
    void _to_ostream(std::ostream& os) const override;

private:
    std::shared_ptr<BooleanExpression> _expression1;
    std::shared_ptr<BooleanExpression> _expression2;
};


class OrExpression : public BooleanExpression {
public:
    OrExpression(const std::shared_ptr<BooleanExpression>& expression1,
                  const std::shared_ptr<BooleanExpression>& expression2);
    bool evaluate(Context& context) override;

protected:
    void _to_ostream(std::ostream& os) const override;

private:
    std::shared_ptr<BooleanExpression> _expression1;
    std::shared_ptr<BooleanExpression> _expression2;
};

class NotExpression : public BooleanExpression {
public:
    explicit NotExpression(const std::shared_ptr<BooleanExpression>& expression);
    bool evaluate(Context& context) override;

protected:
    void _to_ostream(std::ostream& os) const override;

private:
    std::shared_ptr<BooleanExpression> _expression;
};


#endif //BOOLEANEXPRESSIONS_BOOLEAN_EXPRESSION_H
