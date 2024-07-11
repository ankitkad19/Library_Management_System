#ifndef BOOK_H
#define BOOK_H

#include <string>

struct Book {
    int id;
    std::string title;
    std::string author;
    bool isAvailable;

    Book(int i, const std::string& t, const std::string& a);
};

#endif
