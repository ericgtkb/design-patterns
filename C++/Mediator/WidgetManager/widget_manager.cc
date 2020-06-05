#include "widget_manager.h"

WindowManager::WindowManager() : _text_box{std::make_unique<TextBox>(this, "")},
                                 _draw_button{std::make_unique<Button>(this, "Draw")},
                                 _clear_button{std::make_unique<Button>(this, "Clear")},
                                 _display_window{std::make_unique<DisplayWindow>(this)} {}

void WindowManager::widget_changed(Widget* widget) {
    if (widget == _text_box.get()) {
        _display_window->display(_text_box->get_text());
    } else if (widget == _draw_button.get()) {
        _display_window->display(_text_box->get_text());
    } else if (widget == _clear_button.get()) {
        _text_box->set_text("");
    }
}

TextBox* WindowManager::get_text_box() const {
    return _text_box.get();
}

Button* WindowManager::get_draw_button() const {
    return _draw_button.get();
}

Button* WindowManager::get_clear_button() const {
    return _clear_button.get();
}

DisplayWindow* WindowManager::get_display_window() const {
    return _display_window.get();
}






