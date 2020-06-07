package com.ericgtkb;

public interface BooleanExpression {
    boolean evaluate(Context context);

    default BooleanExpression and(BooleanExpression expression) {
        return new AndExpression(this, expression);
    }

    default BooleanExpression or(BooleanExpression expression) {
        return new OrExpression(this, expression);
    }

    default BooleanExpression not() {
        return new NotExpression(this);
    }
}

class VariableExpression implements BooleanExpression {
    private String name;

    public VariableExpression(String name) {
        this.name = name;
    }

    @Override
    public boolean evaluate(Context context) {
        return context.lookup(name);
    }

    public String getName() {
        return name;
    }

    @Override
    public String toString() {
        return name;
    }
}

class AndExpression implements BooleanExpression {
    private BooleanExpression expression1;
    private BooleanExpression expression2;

    public AndExpression(BooleanExpression expression1, BooleanExpression expression2) {
        this.expression1 = expression1;
        this.expression2 = expression2;
    }

    @Override
    public boolean evaluate(Context context) {
        return expression1.evaluate(context) && expression2.evaluate(context);
    }

    @Override
    public String toString() {
        return "(" + expression1 + " and " + expression2 + ")";
    }
}

class OrExpression implements BooleanExpression {
    private BooleanExpression expression1;
    private BooleanExpression expression2;

    public OrExpression(BooleanExpression expression1, BooleanExpression expression2) {
        this.expression1 = expression1;
        this.expression2 = expression2;
    }

    @Override
    public boolean evaluate(Context context) {
        return expression1.evaluate(context) || expression2.evaluate(context);
    }

    @Override
    public String toString() {
        return "(" + expression1 + " or " + expression2 + ")";
    }
}

class NotExpression implements BooleanExpression {
    private BooleanExpression expression;

    public NotExpression(BooleanExpression expression) {
        this.expression = expression;
    }

    @Override
    public boolean evaluate(Context context) {
        return !expression.evaluate(context);
    }

    @Override
    public String toString() {
        return "not " + expression;
    }
}
