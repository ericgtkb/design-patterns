#ifndef WIDGETMANAGER_WIDGET_MANAGER_H
#define WIDGETMANAGER_WIDGET_MANAGER_H

#include <memory>
#include "widget.h"

class WidgetManager {
public:
    virtual ~WidgetManager() = default;
    virtual void widget_changed(Widget* widget) = 0;
};

class WindowManager : public WidgetManager {
public:
    WindowManager();
    void widget_changed(Widget* widget) override;
    TextBox* get_text_box() const;
    Button* get_draw_button() const;
    Button* get_clear_button() const;
    DisplayWindow* get_display_window() const;

private:
    std::unique_ptr<TextBox> _text_box;
    std::unique_ptr<Button> _draw_button;
    std::unique_ptr<Button> _clear_button;
    std::unique_ptr<DisplayWindow> _display_window;
};


#endif //WIDGETMANAGER_WIDGET_MANAGER_H
