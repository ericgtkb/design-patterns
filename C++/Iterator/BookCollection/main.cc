#include <iostream>
#include <memory>
#include "book_collection.h"

int main() {
    ScienceCollection science {};
    MusicCollection music {};

    std::unique_ptr<CollectionIterator> iterator {science.create_iterator()};
    std::cout << "Iterating through the science collection...\n";
    for (iterator->first(); !iterator->is_done(); iterator->next()) {
        std::cout << iterator->current_item() << "\n";
    }
    std::cout << "\n";

    iterator = music.create_iterator();
    std::cout << "Iterating through the music collection...\n";
    while (!iterator->is_done()) {
        std::cout << iterator->current_item() << "\n";
        iterator->next();
    }
    std::cout << "\n";

    return 0;
}
