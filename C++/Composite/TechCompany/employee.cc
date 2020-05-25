#include <iostream>
#include <algorithm>
#include "employee.h"

Developer::Developer(const std::string& name, int employee_id, const std::string& title) : _name(name),
                                                                                           _employee_id(employee_id),
                                                                                           _title(title) {}

void Developer::show_details() {
    std::cout << "\t\tDEVELOPER ID: " << _employee_id << ", NAME: " << _name << ", TITLE: " << _title << "\n";
}



Salesperson::Salesperson(const std::string& name, int employee_id, const std::string& title) : _name(name),
                                                                                               _employee_id(employee_id),
                                                                                               _title(title) {}

void Salesperson::show_details() {
    std::cout << "\t\tSALESPERSON ID: " << _employee_id << ", NAME: " << _name << ", TITLE: " << _title << "\n";
}


Manager::Manager(const std::string& name, int employee_id, const std::string& title) : _name(name),
                                                                                       _employee_id(employee_id),
                                                                                       _title(title),
                                                                                       _employees() {}

void Manager::show_details() {
    std::cout << "\tMANAGER ID: " << _employee_id << ", NAME: " << _name << ", TITLE: " << _title << "\n";
    for (auto& employee : _employees) {
        employee->show_details();
    }
}

void Manager::add_employee(Employee* employee) {
    _employees.emplace(employee);
}

void Manager::remove_employee(Employee* employee) {
    auto it = std::find_if(_employees.begin(), _employees.end(),
                        [employee](auto& emp) {return emp.get() == employee;});
    _employees.erase(it);
}

CEO::CEO(const std::string& name, int employee_id, const std::string& title) : _name(name),
                                                                               _employee_id(employee_id),
                                                                               _title(title),
                                                                               _employees() {}

void CEO::add_employee(Employee* employee) {
    _employees.emplace(employee);
}

void CEO::remove_employee(Employee* employee) {
    auto it = std::find_if(_employees.begin(), _employees.end(),
                        [employee](auto& emp) {return emp.get() == employee;});
    _employees.erase(it);
}

void CEO::show_details() {
    std::cout << "CEO ID: " << _employee_id << ", NAME: " << _name << ", TITLE: " << _title << "\n";
    for (auto& employee : _employees) {
        employee->show_details();
    }
}
