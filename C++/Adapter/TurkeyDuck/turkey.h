#ifndef TURKEYDUCK_TURKEY_H
#define TURKEYDUCK_TURKEY_H


class Turkey {
public:
    virtual ~Turkey() = default;
    virtual void gobble() = 0;
    virtual void fly() = 0;
};

class WildTurkey : public Turkey {
public:
    void gobble() override;
    void fly() override;
};


#endif //TURKEYDUCK_TURKEY_H
