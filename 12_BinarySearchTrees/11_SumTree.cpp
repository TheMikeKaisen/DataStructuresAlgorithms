// Given a Binary Tree. Return true if, for every node X in the tree other than the leaves, its value is equal to the sum of its left subtree's value and its right subtree's value. Else return false.

// An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree.

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
pair<bool, int> isSumTreeFast(node* root){
        if(root==NULL){
            pair<bool, int> p = make_pair(true, 0);
            return p;
        } 
        
        if(root->left==NULL && root->right == NULL){
            pair<bool, int> p = make_pair(true, root->data);
            return p;
        } 
        
        pair<bool, int> leftAns = isSumTreeFast(root->left);
        pair<bool, int> rightAns = isSumTreeFast(root->right);
        
        bool left1 = leftAns.first;
        bool right1 = rightAns.first;
        
        bool condn = root->data == (leftAns.second + rightAns.second);
        
        pair<bool, int> ans;
        if(left1 && right1 && condn){
            ans.first = true;
            ans.second = 2 * root-> data;
        }
        else {
            ans.first = false;
        }
        return ans;
        
    }
    bool isSumTree(node* root)
    {
         // Your code here
         return isSumTreeFast(root).first;
    }
int main() {
    // Creating nodes
    node* root1 = new node(3);
    root1->left = new node(2);
    root1->right = new node(1);
    
    


    
    cout << isSumTree(root1);

    cout << endl;
    return 0;
}