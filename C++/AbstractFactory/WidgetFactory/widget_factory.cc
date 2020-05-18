#include "widget_factory.h"

std::unique_ptr<Button> WindowsWidgetFactory::create_button() const {
    return std::make_unique<WindowsStyleButton>();
}

std::unique_ptr<Scrollbar> WindowsWidgetFactory::create_scrollbar() const {
    return std::make_unique<WindowsStyleScrollbar>();
}


std::unique_ptr<Button> MacWidgetFactory::create_button() const {
    return std::make_unique<MacStyleButton>();
}

std::unique_ptr<Scrollbar> MacWidgetFactory::create_scrollbar() const {
    return std::make_unique<MacStyleScrollbar>();
}
