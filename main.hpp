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

    
    void insert(int val);

    
    void inorder(Node* node);
};


