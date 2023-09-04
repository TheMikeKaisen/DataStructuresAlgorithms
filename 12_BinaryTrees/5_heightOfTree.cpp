// to find the maximum height of a tree

#include<iostream>
using namespace std;
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

int height(node *root){
    if(root == NULL){
        return 0;
    } 
    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left, right) + 1;

    return ans;
}

int main() {
    // Creating nodes
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    cout << "max height : " << height(root) << endl;

    return 0;
}
