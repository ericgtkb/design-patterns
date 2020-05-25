#include "book_collection.h"

ScienceCollection::ScienceCollection() : _books {Book("Physics"), Book("Math"), Book("Chemistry")},
                                         _size {sizeof(_books) / sizeof(_books[0])} {}

std::unique_ptr<CollectionIterator> ScienceCollection::create_iterator() const {
    return std::make_unique<ScienceCollectionIterator>(_books, _size);
}

MusicCollection::MusicCollection() : _books {Book("Scales and Modes"),
                                             Book("Jazz History"),
                                             Book("Contemporary Harmony"),
                                             Book("Music Theory")} {}

std::unique_ptr<CollectionIterator> MusicCollection::create_iterator() const {
    return std::make_unique<MusicCollectionIterator>(_books);
}
