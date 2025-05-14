#pragma once
#include <vector>

// Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// BinaryTree class
class BinaryTree {
public:
    Node* root;
    BinaryTree() : root(nullptr) {}

    // Insert a value into the tree
    void insert(int val);

    // In-order traversal
    void inorder(Node* node);
};


