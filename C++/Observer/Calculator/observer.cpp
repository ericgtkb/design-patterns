//
// Created by Eric Chen on 2019-09-05.
//

#include <iostream>
#include "observer.h"

Add::Add(Subject& s) : subject{&s}, a{}, b{}, sum{} {
    s.add_observer(*this);
}

void Add::update() {
    DataSource* data_source {dynamic_cast<DataSource*>(subject)};
    a = data_source->get_a();
    b = data_source->get_b();
    calculate_sum();
    display();
}

void Add::calculate_sum() {
    sum = a + b;
}

void Add::display() {
    std::cout << "Calculating sum..."
              << "\na = " << a
              << "\nb = " << b
              << "\na + b = " << sum << '\n';
}


Average::Average(Subject& s) : subject{&s}, a_ave{}, b_ave{}, count{0} {
    s.add_observer(*this);
}

void Average::update() {
    DataSource* data_source {dynamic_cast<DataSource*>(subject)};
    calculate_average(data_source->get_a(), data_source->get_b());
    display();
}

void Average::display() {
    std::cout << "Calculating average..."
              << "\nThe average of a so far is: " << a_ave
              << "\nThe average of b so far is: " << b_ave << '\n';
}

void Average::calculate_average(int a, int b) {
    a_ave = (a_ave * count + a) / (count + 1);
    b_ave = (b_ave * count + b) / (count + 1);
    count++;
}
