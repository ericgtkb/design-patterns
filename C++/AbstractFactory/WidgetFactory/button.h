#ifndef WIDGETFACTORY_BUTTON_H
#define WIDGETFACTORY_BUTTON_H


class Button {
public:
    virtual ~Button() = default;
    virtual void click() const = 0;
};

class WindowsStyleButton : public Button {
public:
    void click() const override;
};

class MacStyleButton : public Button {
public:
    void click() const override;
};

#endif //WIDGETFACTORY_BUTTON_H
