#ifndef LAPTOPMANUFACTURER_LAPTOP_BUILDER_H
#define LAPTOPMANUFACTURER_LAPTOP_BUILDER_H

#include <memory>
#include "laptop.h"

class LaptopBuilder {
public:
    virtual ~LaptopBuilder() = default;
    virtual void set_laptop_name() = 0;
    virtual void install_cpu() = 0;
    virtual void install_memory() = 0;
    virtual void install_os() = 0;
    virtual std::unique_ptr<Laptop> get_laptop() = 0;
};

class MacbookBuilder : public LaptopBuilder {
public:
    MacbookBuilder();
    void set_laptop_name() override;
    void install_cpu() override;
    void install_memory() override;
    void install_os() override;
    std::unique_ptr<Laptop> get_laptop() override;
private:
    std::unique_ptr<Laptop> _laptop;
};

class LinuxLaptopBuilder : public LaptopBuilder {
public:
    LinuxLaptopBuilder();
    void set_laptop_name() override;
    void install_cpu() override;
    void install_memory() override;
    void install_os() override;
    std::unique_ptr<Laptop> get_laptop() override;
private:
    std::unique_ptr<Laptop> _laptop;
};

class WindowsLaptopBuilder : public LaptopBuilder {
public:
    WindowsLaptopBuilder();
    void set_laptop_name() override;
    void install_cpu() override;
    void install_memory() override;
    void install_os() override;
    std::unique_ptr<Laptop> get_laptop() override;
private:
    std::unique_ptr<Laptop> _laptop;
};
#endif //LAPTOPMANUFACTURER_LAPTOP_BUILDER_H
