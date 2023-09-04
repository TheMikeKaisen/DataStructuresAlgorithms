// to print the nodes at each level of tree

#include<iostream>
#include<queue>
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


void levelOrder(node *root){
    queue<node*> q;
    q.push(root);
    while(!q.empty())  {
        node * curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}

int main() {
    // Creating nodes
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    levelOrder(root);

    cout << endl;
    return 0;
}
