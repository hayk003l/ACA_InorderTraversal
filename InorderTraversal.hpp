#ifndef __INRORDERTRAVERSAL__
#define __INRORDERTRAVERSAL__
#include <iostream>

template <typename T>
struct Node {
    T value = 0;
    Node<T>* left = nullptr;
    Node<T>* right = nullptr;
};

template <typename T>
void inorderTraversal(Node<T>* node) {
    if (node == nullptr) {
        return;
    }
    
    inorderTraversal(node -> left);
    std::cout << node -> value << " ";
    inorderTraversal(node -> right);
 
};

#endif // __INRORDERTRAVERSAL__