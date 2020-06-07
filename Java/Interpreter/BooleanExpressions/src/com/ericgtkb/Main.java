package com.ericgtkb;

public class Main {

    public static void main(String[] args) {
        Context context = new Context();

        VariableExpression x = new VariableExpression("x");
        VariableExpression y = new VariableExpression("y");
        VariableExpression z = new VariableExpression("z");

        context.assign(x, false);
        context.assign(y, false);
        context.assign(z, true);

        // not (((x and y) or z) and (y and z))
        BooleanExpression expression = x.and(y).or(z).and(y.and(z)).not();

        context.showAssignments();
        System.out.println(expression + " = " + expression.evaluate(context));

        System.out.println("Reassigning variables...");
        context.assign(x, true);
        context.assign(y, true);
        context.assign(z, true);

        context.showAssignments();
        System.out.println(expression + " = " + expression.evaluate(context));
    }
}
