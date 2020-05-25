#ifndef BOOKCOLLECTION_BOOK_H
#define BOOKCOLLECTION_BOOK_H


#include <string>
#include <ostream>


class Book {
public:
    Book(const std::string& name);
    friend std::ostream& operator<<(std::ostream& os, const Book& book);

private:
    std::string _name;
};


#endif //BOOKCOLLECTION_BOOK_H
