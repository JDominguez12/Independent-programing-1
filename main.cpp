#include "main.hpp"
#include <iostream>

// Helper function to insert a value into the tree recursively
Node* insertHelper(Node* node, int val) {
    if (!node) return new Node(val);
    if (val < node->data)
        node->left = insertHelper(node->left, val);
    else
        node->right = insertHelper(node->right, val);
    return node;
}

void BinaryTree::insert(int val) {
    root = insertHelper(root, val);
}

// In-order traversal (prints values in sorted order)
void BinaryTree::inorder(Node* node) {
    if (!node) return;
    inorder(node->left);
    std::cout << node->data << " ";
    inorder(node->right);
}

int main() {
    BinaryTree tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(4);

    std::cout << "In-order traversal: ";
    tree.inorder(tree.root);
    std::cout << std::endl;

    return 0;
}