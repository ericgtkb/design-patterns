#ifndef WIDGETFACTORY_WIDGET_FACTORY_H
#define WIDGETFACTORY_WIDGET_FACTORY_H


#include <memory>
#include "button.h"
#include "scrollbar.h"

class WidgetFactory {
public:
    virtual ~WidgetFactory() = default;
    virtual std::unique_ptr<Button> create_button() const = 0;
    virtual std::unique_ptr<Scrollbar> create_scrollbar() const = 0;
};

class WindowsWidgetFactory : public WidgetFactory {
public:
    std::unique_ptr<Button> create_button() const override;
    std::unique_ptr<Scrollbar> create_scrollbar() const override;
};

class MacWidgetFactory : public WidgetFactory {
public:
    std::unique_ptr<Button> create_button() const override;
    std::unique_ptr<Scrollbar> create_scrollbar() const override;
};

#endif //WIDGETFACTORY_WIDGET_FACTORY_H
