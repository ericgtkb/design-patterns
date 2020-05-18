#include <iostream>
#include <string>
#include <memory>
#include "widget_factory.h"

std::unique_ptr<WidgetFactory> get_factory(const std::string& factory_type) {
    if (factory_type == "Windows") {
        return std::make_unique<WindowsWidgetFactory>();
    } else if (factory_type == "Mac") {
        return std::make_unique<MacWidgetFactory>();
    } else {
        return nullptr;
    }
}

int main() {
    std::unique_ptr<WidgetFactory> factory {get_factory("Windows")};
    std::unique_ptr<Button> button {factory->create_button()};
    std::unique_ptr<Scrollbar> scrollbar {factory->create_scrollbar()};

    button->click();
    scrollbar->scroll();
    std::cout << '\n';

    factory = get_factory("Mac");
    button = factory->create_button();
    scrollbar = factory->create_scrollbar();

    button->click();
    scrollbar->scroll();
    std::cout << '\n';

    return 0;
}
