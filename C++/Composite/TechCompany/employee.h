#ifndef TECHCOMPANY_EMPLOYEE_H
#define TECHCOMPANY_EMPLOYEE_H


#include <string>
#include <unordered_set>
#include <memory>

class Employee {
public:
    virtual ~Employee() = default;
    virtual void show_details() = 0;
};

// Leaf class
class Developer : public Employee {
public:
    Developer(const std::string &name, int employee_id, const std::string &title);
    void show_details() override;

private:
    std::string _name;
    int _employee_id;
    std::string _title;
};


// Leaf class
class Salesperson : public Employee {
public:
    Salesperson(const std::string &name, int employee_id, const std::string &title);
    void show_details() override;

private:
    std::string _name;
    int _employee_id;
    std::string _title;
};


// Composite class
// In this implementation, I let composite class to take ownership of their components
class Manager : public Employee {
public:
    Manager(const std::string &name, int employee_id, const std::string &title);
    void add_employee(Employee* employee);
    void remove_employee(Employee* employee);
    void show_details() override;

private:
    std::string _name;
    int _employee_id;
    std::string _title;
    std::unordered_set<std::unique_ptr<Employee>> _employees;
};

// Composite class
class CEO : public Employee {
public:
    CEO(const std::string &name, int employee_id, const std::string &title);
    void add_employee(Employee* employee);
    void remove_employee(Employee* employee);
    void show_details() override;

private:
    std::string _name;
    int _employee_id;
    std::string _title;
    std::unordered_set<std::unique_ptr<Employee>> _employees;
};


#endif //TECHCOMPANY_EMPLOYEE_H
