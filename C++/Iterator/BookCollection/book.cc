#include "book.h"

Book::Book(const std::string& name) : _name(name) {}

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << book._name;
    return os;
}
