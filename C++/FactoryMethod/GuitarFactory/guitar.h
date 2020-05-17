#ifndef GUITARFACTORY_GUITAR_H
#define GUITARFACTORY_GUITAR_H


#include <string>

class Guitar {
public:
    Guitar(const std::string &name, const std::string &body, const std::string &pickup, const std::string &bridge);

    virtual ~Guitar() = default;
    virtual void assemble() const;
    virtual void string_the_guitar() const = 0;

    const std::string &get_name() const;

protected:
    std::string _name;
    std::string _body;
    std::string _pickup;
    std::string _bridge;
};


class GibsonLesPaul : public Guitar {
public:
    GibsonLesPaul();

    void string_the_guitar() const override;
};

class GibsonSG : public Guitar {
public:
    GibsonSG();

    void string_the_guitar() const override;
};


class FenderStratocaster : public Guitar {
public:
    FenderStratocaster();

    void string_the_guitar() const override;
};


class FenderTelecaster : public Guitar {
public:
    FenderTelecaster();

    void string_the_guitar() const override;
};


#endif //GUITARFACTORY_GUITAR_H
