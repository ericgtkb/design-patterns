package com.ericgtkb;

import java.util.HashSet;
import java.util.Set;

// Component interface
// Sometimes add and remove is also put here
public interface Employee {
    void showDetails();
}

// Leaf class
class Developer implements Employee {
    private String name;
    private int employeeId;
    private String title;

    public Developer(String name, int employeeId, String title) {
        this.name = name;
        this.employeeId = employeeId;
        this.title = title;
    }

    @Override
    public void showDetails() {
        System.out.println("\t\tDEVELOPER ID: " + employeeId + ", NAME: " + name + ", TITLE: " + title);
    }
}


// Leaf class
class Salesperson implements Employee {
    private String name;
    private int employeeId;
    private String title;

    public Salesperson(String name, int employeeId, String title) {
        this.name = name;
        this.employeeId = employeeId;
        this.title = title;
    }

    @Override
    public void showDetails() {
        System.out.println("\t\tSALESPERSON ID: " + employeeId + ", NAME: " + name + ", TITLE: " + title);
    }
}

// Composite class
class Manager implements Employee {
    private String name;
    private int employeeId;
    private String title;
    private Set<Employee> employees;

    public Manager(String name, int employeeId, String title) {
        this.name = name;
        this.employeeId = employeeId;
        this.title = title;
        employees = new HashSet<>();
    }

    void addEmployee(Employee employee) {
        employees.add(employee);
    }

    void removeEmployee(Employee employee) {
        employees.remove(employee);
    }

    @Override
    public void showDetails() {
        System.out.println("\tMANAGER ID: " + employeeId + ", NAME: " + name + ", TITLE: " + title);
        for (var employee : employees) {
            employee.showDetails();
        }
    }
}

// Composite class
class CEO implements Employee {
    private String name;
    private int employeeId;
    private String title;
    private Set<Employee> employees;

    public CEO(String name, int employeeId, String title) {
        this.name = name;
        this.employeeId = employeeId;
        this.title = title;
        employees = new HashSet<>();
    }

    void addEmployee(Employee employee) {
        employees.add(employee);
    }

    void removeEmployee(Employee employee) {
        employees.remove(employee);
    }

    @Override
    public void showDetails() {
        System.out.println("CEO: " + employeeId + ", NAME: " + name + ", TITLE: " + title);
        for (var employee : employees) {
            employee.showDetails();
        }
    }
}
