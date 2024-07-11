#include "UserTable.h"

void UserTable::addUser(User* user) {
    users[user->id] = user;
}

User* UserTable::searchUser(int id) {
    return users.count(id) ? users[id] : nullptr;
}

void UserTable::deleteUser(int id) {
    users.erase(id);
}
