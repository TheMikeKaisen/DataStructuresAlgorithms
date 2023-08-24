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
        cout << root->data << endl;
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main() {
    // Creating nodes
    node* root = new node(1);
    root->right = new node(2);
    root->right->left = new node(3);
    

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
