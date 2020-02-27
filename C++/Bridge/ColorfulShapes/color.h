#ifndef COLORFULSHAPES_COLOR_H
#define COLORFULSHAPES_COLOR_H


class Color {
public:
    virtual ~Color() = default;
    virtual void fill_color() const = 0;
};


class RedColor : public Color {
public:
    void fill_color() const override;
};


class GreenColor : public Color {
public:
    void fill_color() const override;
};


class BlueColor : public Color {
public:
    void fill_color() const override;
};

#endif //COLORFULSHAPES_COLOR_H
