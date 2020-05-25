package com.ericgtkb;

public class Main {

    public static void main(String[] args) {
        System.out.println("=========================Tech Company=========================");

        CEO ceo = new CEO("Eric", 0, "Chief Executive Officer");

        Manager projectManager = new Manager("Alice", 1, "Senior Project Manager");
        Manager salesManager = new Manager("Bob", 2, "Sales Manager");

        ceo.addEmployee(projectManager);
        ceo.addEmployee(salesManager);

        Employee developer1 = new Developer("Chris", 3, "iOS developer");
        Employee developer2 = new Developer("Diane", 4, "Android developer");

        projectManager.addEmployee(developer1);
        projectManager.addEmployee(developer2);

        Employee sales1 = new Salesperson("Eddy", 5, "Regional Sales Representative");
        Employee sales2 = new Salesperson("Fiona", 6, "Regional Sales Associate");

        salesManager.addEmployee(sales1);
        salesManager.addEmployee(sales2);

        ceo.showDetails();
        System.out.println();

        System.out.println("Eddy was fired...");
        salesManager.removeEmployee(sales1);
        System.out.println();

        ceo.showDetails();
        System.out.println();

        System.out.println("Gina was hired...");
        Employee developer3 = new Developer("Gina", 7, "Web Developer");
        projectManager.addEmployee(developer3);
        System.out.println();

        ceo.showDetails();
        System.out.println();

    }
}
