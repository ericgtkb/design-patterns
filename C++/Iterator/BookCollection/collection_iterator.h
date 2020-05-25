#ifndef BOOKCOLLECTION_COLLECTION_ITERATOR_H
#define BOOKCOLLECTION_COLLECTION_ITERATOR_H

#include <vector>
#include "book.h"

class CollectionIterator {
public:
    virtual ~CollectionIterator() = default;
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool is_done() const = 0;
    virtual const Book& current_item() const = 0;
};

class ScienceCollectionIterator : public CollectionIterator {
public:
    ScienceCollectionIterator(const Book* books, int size);

    void first() override;
    void next() override;
    bool is_done() const override;
    const Book& current_item() const override;

private:
    const Book* _books;
    const int _size;
    int _current_index;
};

class MusicCollectionIterator : public CollectionIterator {
public:
    MusicCollectionIterator(const std::vector<Book>& books);
    void first() override;
    void next() override;
    bool is_done() const override;
    const Book& current_item() const override;

private:
    const std::vector<Book>& _books;
    int _current_index;
};


#endif //BOOKCOLLECTION_COLLECTION_ITERATOR_H
