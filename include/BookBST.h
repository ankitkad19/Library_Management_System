#ifndef BOOKBST_H
#define BOOKBST_H

#include "Book.h"

struct TreeNode {
    Book* book;
    TreeNode* left;
    TreeNode* right;

    TreeNode(Book* b);
};

class BookBST {
private:
    TreeNode* root;

    TreeNode* insert(TreeNode* node, Book* book);
    TreeNode* search(TreeNode* node, int id);

public:
    BookBST();
    void insertBook(Book* book);
    Book* searchBook(int id);
};

#endif
