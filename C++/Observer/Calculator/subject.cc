//
// Created by Eric Chen on 2019-09-05.
//

#include "subject.h"
#include "observer.h"


DataSource::DataSource() : observers{}, a{}, b{} {
}

void DataSource::add_observer(Observer& obs) {
    observers.emplace(&obs);
}

void DataSource::remove_observer(Observer& obs) {
    auto it = observers.find(&obs);
    observers.erase(it);
}

void DataSource::notify_observers() {
    for (auto observer : observers) {
        observer->update();
    }
}

int DataSource::get_a() const {
    return a;
}

int DataSource::get_b() const {
    return b;
}

void DataSource::update_data(int a, int b) {
    this->a = a;
    this->b = b;
    notify_observers();
}
