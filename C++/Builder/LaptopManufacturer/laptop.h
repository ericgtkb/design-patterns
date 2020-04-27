#ifndef LAPTOPMANUFACTURER_LAPTOP_H
#define LAPTOPMANUFACTURER_LAPTOP_H


#include <string>

class Laptop {
public:
    void set_name(const std::string &name);
    void set_cpu(const std::string &cpu);
    void set_memory(const std::string &memory);
    void set_os(const std::string &os);
    void show_specs() const;

private:
    std::string _name;
    std::string _cpu;
    std::string _memory;
    std::string _os;
};


#endif //LAPTOPMANUFACTURER_LAPTOP_H
