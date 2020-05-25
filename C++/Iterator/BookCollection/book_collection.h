#ifndef BOOKCOLLECTION_BOOK_COLLECTION_H
#define BOOKCOLLECTION_BOOK_COLLECTION_H


#include <vector>
#include <memory>
#include "book.h"
#include "collection_iterator.h"

class BookCollection {
public:
    virtual ~BookCollection() = default;
    virtual std::unique_ptr<CollectionIterator> create_iterator() const = 0;
};


class ScienceCollection : public BookCollection {
public:
    ScienceCollection();
    std::unique_ptr<CollectionIterator> create_iterator() const override;

private:
    Book _books[3];
    int _size;
};

class MusicCollection : public BookCollection {
public:
    MusicCollection();
    std::unique_ptr<CollectionIterator> create_iterator() const override;

private:
    std::vector<Book> _books;
};



#endif //BOOKCOLLECTION_BOOK_COLLECTION_H
