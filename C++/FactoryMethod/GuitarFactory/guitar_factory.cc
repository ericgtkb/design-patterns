
#include "guitar_factory.h"

std::unique_ptr<Guitar> GuitarFactory::get_guitar(const std::string& type) const {
    std::unique_ptr<Guitar> guitar {build_guitar(type)};
    guitar->assemble();
    guitar->string_the_guitar();

    return std::move(guitar);
}


std::unique_ptr<Guitar> GibsonFactory::build_guitar(const std::string &type) const {
    if (type == "Les Paul") {
        return std::make_unique<GibsonLesPaul>();
    } else if (type == "SG") {
        return std::make_unique<GibsonSG>();
    } else {
        return nullptr;
    }
}


std::unique_ptr<Guitar> FenderFactory::build_guitar(const std::string &type) const {
    if (type == "Stratocaster") {
        return std::make_unique<FenderStratocaster>();
    } else if (type == "Telecaster") {
        return std::make_unique<FenderTelecaster>();
    } else {
        return nullptr;
    }
}
