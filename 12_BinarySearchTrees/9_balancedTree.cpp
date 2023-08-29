//A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.


#include <iostream>

using namespace std;

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

// this would take O(n) time complexity
pair<bool, int> balancedTreeFast(node *root){
    if(root == NULL){
        pair<bool, int> p = make_pair(true, 0);
        return p;
        // return true;
    }

    pair<bool, int> left = balancedTreeFast(root->left);
    pair<bool, int> right = balancedTreeFast(root->right);


    bool leftAns = left.first;
    bool rightAns = right.first;

    bool b = abs(left.second - right.second) <= 1;

    pair<bool, int> ans;
    ans.second = max(left.second, right.second) + 1;

    if(leftAns && rightAns && b){
        ans.first = true;
    }
    else{
        ans.first = false;
    }
    return ans;
    
}

bool balancedTree(node *root){
    pair<bool, int> answer = balancedTreeFast(root);
    return answer.first;
}
int main() {
    // Creating nodes
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(2);
    root->left->left = new node(3);
    root->left->right = new node(3);
    root->left->left->left = new node(4);
    root->left->left->right = new node(4);

    cout << balancedTree(root);

    cout << endl;
    return 0;
}
