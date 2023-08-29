// to find the diameter of a tree

#include <iostream>
#include <utility>
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

// finding diameter by using pair
pair<int, int> diameterFast(node *root){
    if(root == NULL ){
        pair<int, int> p = make_pair(0, 0);
        return p;
    }

    pair<int, int> left = diameterFast(root->left);
    pair<int, int> right = diameterFast(root->right);

    int opt1 = left.first;
    int opt2 = right.first;

    int opt3 = left.second+ right.second + 1;

    pair<int, int> ans;
    ans.first = max(opt1, max(opt2, opt3));
    ans.second = max(left.second, right.second) +1;
    return ans;

}

int diameter(node *root){
    pair<int, int> answer = diameterFast(root);
    return answer.first; // returns the diameter

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

    cout << "length of diameter : " << diameter(root);

    cout << endl;
    return 0;
}
