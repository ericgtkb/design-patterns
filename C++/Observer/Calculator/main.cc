#include <iostream>
#include "subject.h"
#include "observer.h"

int main() {
    DataSource data_source{};
    Add add_display{data_source};
    Average average_display{data_source};
    data_source.update_data(1, 4);
    data_source.update_data(3, 5);
    data_source.remove_observer(add_display);
    data_source.update_data(2, 4);

    return 0;
}