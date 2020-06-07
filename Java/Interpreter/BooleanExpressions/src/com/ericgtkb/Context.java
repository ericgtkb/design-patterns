package com.ericgtkb;

import java.util.HashMap;
import java.util.Map;

public class Context {
    private Map<String, Boolean> variableAssignments;

    public Context() {
        variableAssignments = new HashMap<>();
    }

    public void assign(VariableExpression variable, boolean value) {
        variableAssignments.put(variable.getName(), value);
    }

    public boolean lookup(String name) {
        return variableAssignments.get(name);
    }

    public void showAssignments() {
        System.out.println("Boolean values for the variables are:");
        for (var entry : variableAssignments.entrySet()) {
            System.out.println(entry.getKey() + " = " + entry.getValue());
        }
    }
}
