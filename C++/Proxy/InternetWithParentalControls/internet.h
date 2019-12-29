#ifndef INTERNETWITHPARENTALCONTROLS_INTERNET_H
#define INTERNETWITHPARENTALCONTROLS_INTERNET_H

#include <string>
#include <unordered_set>
#include <memory>

class Internet {
public:
    virtual ~Internet() = default;
    virtual void connect_to(const std::string& host) const = 0;
};

class RealInternet : public Internet {
public:
    void connect_to(const std::string &host) const override;
};


class InternetWithParentalControls : public Internet {
public:
    InternetWithParentalControls();
    void connect_to(const std::string &host) const override;

private:
    std::unique_ptr<Internet> internet;
    static std::unordered_set<std::string> banned_sites;
};

#endif //INTERNETWITHPARENTALCONTROLS_INTERNET_H
