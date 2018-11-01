// Minimum implementation of a binary search tree.
// Author: Ryan Shim
// Date: 11-1-2018
#ifndef BST_H
#define BST_H
#include <iostream>

template <typename T>
struct Node {
    T value;
    Node<T>* left;
    Node<T>* right;
    Node<T>* parent;
};

template <typename T>
class BinarySearchTree {
    public:
        BinarySearchTree();
        Node<T>* getRoot();
        bool insertVal(const T& val);
        void inorderPrint(Node<T>* nodeptr);
        T getMinimum();
        T getMaximum();
    private:
        int size;
        Node<T>* root;
};


// Default constructor
template <typename T>
BinarySearchTree<T>::BinarySearchTree() {
    size = 0;
    root = nullptr;
}

// Prints the BST using an inorder traversal.
template <typename T>
void BinarySearchTree<T>::inorderPrint(Node<T>* nodeptr) {
    // TO BE COMPLETED
}

// Returns the maximum in the BST
template <typename T>
T BinarySearchTree<T>::getMinimum() {
    // TO BE COMPLETED
}

// Returns the minimum in the BST
template <typename T>
T BinarySearchTree<T>::getMaximum() {
    // TO BE COMPLETED
}

// Returns a node pointer to the root node
template <typename T>
Node<T>* BinarySearchTree<T>::getRoot() {
    return root;
}



template <typename T>
bool BinarySearchTree<T>::insertVal(const T& val) {
    Node<T>* newNode = new Node<T>;
    newNode->value = val;
    newNode->left = nullptr;
    newNode->right = nullptr;

    if (size == 0) {
        root = newNode;
        size++;
        return true;
    }

    Node<T>* tmp = root;

    while (tmp) {
        if (val > tmp->value) {
            if (tmp->right) {
                tmp = tmp->right;
            }
            else {
                tmp->right = newNode;
                size++;
                return true;
            }
        }
        else if (val < tmp->value) {
            if (tmp->left) {
                tmp = tmp->left;
            }
            else {
                tmp->left = newNode;
                size++;
                return true;
            }
        }
    }
    return false;
}

#endif
