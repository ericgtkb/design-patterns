#ifndef HOUSEBUILDER_HOUSE_H
#define HOUSEBUILDER_HOUSE_H


class House {
public:
    virtual ~House() = default;
    virtual void build_house() final;
    virtual void build_pillars() = 0;
    virtual void build_walls() = 0;

private:
    void build_foundation();
    void build_windows();
};

class WoodenHouse : public House {
public:
    void build_pillars() override;
    void build_walls() override;
};

class GlassHouse : public House {
public:
    void build_pillars() override;
    void build_walls() override;
};

#endif //HOUSEBUILDER_HOUSE_H
