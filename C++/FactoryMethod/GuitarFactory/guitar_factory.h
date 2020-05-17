#ifndef GUITARFACTORY_GUITAR_FACTORY_H
#define GUITARFACTORY_GUITAR_FACTORY_H


#include <memory>
#include <string>
#include "guitar.h"

class GuitarFactory {
public:
    virtual ~GuitarFactory() = default;
    std::unique_ptr<Guitar> get_guitar(const std::string& type) const;

protected:
    // The actual factory method
    virtual std::unique_ptr<Guitar> build_guitar(const std::string& type) const = 0;
};


class GibsonFactory : public GuitarFactory {
protected:
    std::unique_ptr<Guitar> build_guitar(const std::string &type) const override;
};

class FenderFactory : public GuitarFactory {
protected:
    std::unique_ptr<Guitar> build_guitar(const std::string &type) const override;
};

#endif //GUITARFACTORY_GUITAR_FACTORY_H
