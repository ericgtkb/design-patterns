#include <iostream>
#include "employee.h"

int main() {
    std::cout << std::string(25, '=') << "Tech Company" << std::string(25, '=') << "\n";

    CEO* ceo {new CEO("Eric", 0, "Chief Executive Officer")};

    Manager* project_manager {new Manager("Alice", 1, "Senior Project Manager")};
    Manager* sales_manager {new Manager("Bob", 2, "Sales Manager")};

    ceo->add_employee(project_manager);
    ceo->add_employee(sales_manager);

    Employee* developer1 {new Developer("Chris", 3, "iOS developer")};
    Employee* developer2 {new Developer("Diane", 4, "Android developer")};

    project_manager->add_employee(developer1);
    project_manager->add_employee(developer2);

    Employee* sales1 {new Salesperson("Eddy", 5, "Regional Sales Representative")};
    Employee* sales2 {new Salesperson("Fiona", 6, "Regional Sales Associate")};

    sales_manager->add_employee(sales1);
    sales_manager->add_employee(sales2);

    ceo->show_details();
    std::cout << "\n";

    std::cout << "Eddy was fired...\n";
    sales_manager->remove_employee(sales1);
    std::cout << "\n";

    ceo->show_details();
    std::cout << "\n";

    std::cout << "Gina was hired...\n";
    Employee* developer3 {new Developer("Gina", 7, "Web Developer")};
    project_manager->add_employee(developer3);
    std::cout << "\n";

    ceo->show_details();
    std::cout << "\n";

    return 0;
}
