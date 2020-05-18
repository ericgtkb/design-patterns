#ifndef WIDGETFACTORY_SCROLLBAR_H
#define WIDGETFACTORY_SCROLLBAR_H


class Scrollbar {
public:
    virtual ~Scrollbar() = default;
    virtual void scroll() const = 0;
};

class WindowsStyleScrollbar : public Scrollbar {
public:
    void scroll() const override;
};

class MacStyleScrollbar : public Scrollbar {
public:
    void scroll() const override;
};

#endif //WIDGETFACTORY_SCROLLBAR_H
