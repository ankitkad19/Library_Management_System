#include "BookBST.h"

TreeNode::TreeNode(Book* b) : book(b), left(nullptr), right(nullptr) {}

BookBST::BookBST() : root(nullptr) {}

TreeNode* BookBST::insert(TreeNode* node, Book* book) {
    if (node == nullptr) return new TreeNode(book);
    if (book->id < node->book->id) node->left = insert(node->left, book);
    else node->right = insert(node->right, book);
    return node;
}

TreeNode* BookBST::search(TreeNode* node, int id) {
    if (node == nullptr || node->book->id == id) return node;
    if (id < node->book->id) return search(node->left, id);
    else return search(node->right, id);
}

void BookBST::insertBook(Book* book) {
    root = insert(root, book);
}

Book* BookBST::searchBook(int id) {
    TreeNode* node = search(root, id);
    return node ? node->book : nullptr;
}
