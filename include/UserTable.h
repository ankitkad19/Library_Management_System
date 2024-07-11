#ifndef USERTABLE_H
#define USERTABLE_H

#include "User.h"
#include <unordered_map>

class UserTable {
private:
    std::unordered_map<int, User*> users;

public:
    void addUser(User* user);
    User* searchUser(int id);
    void deleteUser(int id);
};

#endif
