// in post order traversal, first the all nodes in the left is printed, then all nodes in the right is printed, and last, the root node is printed.

#include <iostream>

using namespace std;

struct node {
    int data;
    node* left;
    node* right;
    node(int d) {
        this->data = d;
        left = nullptr;
        right = nullptr;
    }
};

void preOrder(node* root) {
    if (root != nullptr) {
        preOrder(root->left);
        preOrder(root->right);
        cout << root->data << endl;
    }
}

int main() {
    // Creating nodes
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    // Performing pre-order traversal
    cout << "Pre-order traversal:" << endl;
    preOrder(root);

    // Don't forget to free allocated memory (delete nodes)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
