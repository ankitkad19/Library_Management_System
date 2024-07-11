#ifndef LIBRARYSYSTEM_H
#define LIBRARYSYSTEM_H

#include "BookBST.h"
#include "UserTable.h"

class LibrarySystem {
private:
    BookBST bookBST;
    UserTable userTable;

public:
    void addBook(int id, const std::string& title, const std::string& author);
    void addUser(int id, const std::string& name);
    void borrowBook(int userId, int bookId);
    void returnBook(int userId, int bookId);
};

#endif
