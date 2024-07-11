#ifndef USER_H
#define USER_H

#include <string>
#include <list>

struct User {
    int id;
    std::string name;
    std::list<int> borrowedBooks;

    User(int i, const std::string& n);
};

#endif
