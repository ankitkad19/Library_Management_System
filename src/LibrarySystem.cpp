#include "LibrarySystem.h"

void LibrarySystem::addBook(int id, const std::string& title, const std::string& author) {
    Book* book = new Book(id, title, author);
    bookBST.insertBook(book);
}

void LibrarySystem::addUser(int id, const std::string& name) {
    User* user = new User(id, name);
    userTable.addUser(user);
}

void LibrarySystem::borrowBook(int userId, int bookId) {
    User* user = userTable.searchUser(userId);
    Book* book = bookBST.searchBook(bookId);

    if (user && book && book->isAvailable) {
        book->isAvailable = false;
        user->borrowedBooks.push_back(bookId);
        std::cout << "Book borrowed successfully." << std::endl;
    } else {
        std::cout << "Borrowing failed." << std::endl;
    }
}

void LibrarySystem::returnBook(int userId, int bookId) {
    User* user = userTable.searchUser(userId);
    Book* book = bookBST.searchBook(bookId);

    if (user && book) {
        book->isAvailable = true;
        user->borrowedBooks.remove(bookId);
        std::cout << "Book returned successfully." << std::endl;
    } else {
        std::cout << "Returning failed." << std::endl;
    }
}
