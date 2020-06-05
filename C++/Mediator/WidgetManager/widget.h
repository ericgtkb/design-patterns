#ifndef WIDGETMANAGER_WIDGET_H
#define WIDGETMANAGER_WIDGET_H

#include <string>

class WidgetManager;

class Widget {
public:
    virtual ~Widget() = default;
    virtual void changed();
protected:
    WidgetManager* _widget_manager;
    Widget(WidgetManager* widget_manager);
};

class TextBox : public Widget {
public:
    TextBox(WidgetManager* widget_manager, const std::string& text);
    void set_text(const std::string& text);
    const std::string& get_text() const;

private:
    std::string _text;
};

class DisplayWindow : public Widget {
public:
    DisplayWindow(WidgetManager* widget_manager);
    void display(const std::string& text) const;
};

class Button : public Widget {
public:
    Button(WidgetManager* widget_manager, const std::string& name);
    void clicked();

private:
    std::string _name;
};


#endif //WIDGETMANAGER_WIDGET_H
