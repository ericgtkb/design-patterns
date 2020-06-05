#include <iostream>
#include "widget.h"
#include "widget_manager.h"

Widget::Widget(WidgetManager* widget_manager) : _widget_manager(widget_manager) {}

void Widget::changed() {
    _widget_manager->widget_changed(this);
}


TextBox::TextBox(WidgetManager* widget_manager, const std::string& text) : Widget(widget_manager), _text(text) {}

void TextBox::set_text(const std::string &text) {
    std::cout << "Setting text to \"" << text << "\" ...\n";
    _text = text;
    changed();
}

const std::string& TextBox::get_text() const {
    return _text;
}


DisplayWindow::DisplayWindow(WidgetManager* widget_manager) : Widget(widget_manager) {}

void DisplayWindow::display(const std::string& text) const {
    std::string right_pad(76 - text.size(), ' ');
    right_pad += "||";
    std::cout << "Displaying text...\n";
    std::cout << std::string(80, '=') << '\n';
    std::cout << "||" << std::string(76, ' ') << "||\n";
    std::cout << "||" << text << right_pad << '\n';
    std::cout << "||" << std::string(76, ' ') << "||\n";
    std::cout << std::string(80, '=') << '\n';
}


Button::Button(WidgetManager* widget_manager, const std::string& name) : Widget(widget_manager), _name(name) {}

void Button::clicked() {
    std::cout << "Button " << _name << " clicked...\n";
    changed();
}
