// Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

// to display the top view of a binary tree

#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<map>

// to display the top view of a binary tree

#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<map>

// Define a struct for tree TreeNodes
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int d) {
        this->val = d;
        left = nullptr;
        right = nullptr;
    }
};

bool isSym(TreeNode *r1, TreeNode *r2){
        if(r1 == NULL && r2 == NULL){
            return true;
        }
        if(r1 == NULL && r2 != NULL){
            return false;
        }
        if(r2 == NULL && r1 != NULL){
            return false;
        }
        if(r1->val != r2->val){
            return false;
        }
        bool s1 = isSym(r1->left, r2->right);
        bool s2 = isSym(r1->right, r2->left);

        bool val = r1->val == r2->val;
        if(s1 && s2){
            return true;
        }
        return false;

    }

    bool isSymmetric(TreeNode* root) {
        return isSym(root->left, root->right);
    }



int main() {
    // Creating Nodes to build a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(4);

    cout << isSymmetric(root);
    cout << endl;
    return 0;
}
