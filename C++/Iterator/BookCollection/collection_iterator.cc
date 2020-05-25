#include <stdexcept>
#include "collection_iterator.h"

ScienceCollectionIterator::ScienceCollectionIterator(const Book* books, int size) : _books(books), _size(size),
                                                                              _current_index(0) {}

void ScienceCollectionIterator::first() {
    _current_index  = 0;
}

void ScienceCollectionIterator::next() {
    _current_index++;
}

bool ScienceCollectionIterator::is_done() const {
    return _current_index >= _size;
}

const Book& ScienceCollectionIterator::current_item() const {
    if (is_done()) {
        throw std::runtime_error("Iterator out of bounds...");
    } else {
        return _books[_current_index];
    }
}

MusicCollectionIterator::MusicCollectionIterator(const std::vector<Book>& books) : _books(books),
                                                                                   _current_index(0) {}

void MusicCollectionIterator::first() {
    _current_index = 0;
}

void MusicCollectionIterator::next() {
    _current_index++;
}

bool MusicCollectionIterator::is_done() const {
    return _current_index >= _books.size();
}

const Book &MusicCollectionIterator::current_item() const {
    if (is_done()) {
        throw std::runtime_error("Iterator out of bounds...");
    } else {
        return _books[_current_index];
    }
}


