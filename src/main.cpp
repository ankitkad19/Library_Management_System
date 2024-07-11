#include "LibrarySystem.h"
#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Library Management System Menu:" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Add User" << endl;
    cout << "3. Borrow Book" << endl;
    cout << "4. Return Book" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    LibrarySystem library;
    int choice, id;
    string title, author, name;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Book ID: ";
                cin >> id;
                cout << "Enter Book Title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter Book Author: ";
                getline(cin, author);
                library.addBook(id, title, author);
                break;
            case 2:
                cout << "Enter User ID: ";
                cin >> id;
                cout << "Enter User Name: ";
                cin.ignore();
                getline(cin, name);
                library.addUser(id, name);
                break;
            case 3:
                int userId, bookId;
                cout << "Enter User ID: ";
                cin >> userId;
                cout << "Enter Book ID: ";
                cin >> bookId;
                library.borrowBook(userId, bookId);
                break;
            case 4:
                cout << "Enter User ID: ";
                cin >> userId;
                cout << "Enter Book ID: ";
                cin >> bookId;
                library.returnBook(userId, bookId);
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
