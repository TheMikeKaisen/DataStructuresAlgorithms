// printing the boundary of a tree
// important
#include<iostream>
using namespace std;
#include<vector>

using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int d) {
        this->data = d;
        left = nullptr;
        right = nullptr;
    }
};
void printLeft(TreeNode *root, vector<int> &ans){
    if(root==NULL || (root->left == NULL && root -> right == NULL)){
        return ;
    }
    ans.push_back(root->data);
    if(root->left != NULL){
        printLeft(root->left, ans);
    }
    else{
        printLeft(root->right, ans);
    }
}

void printLeaf(TreeNode *root, vector<int> &ans){
    if(root == NULL){
        return;
    }
    if((root->left==NULL && root->right == NULL)){
        ans.push_back(root->data);
        return; 
    }
    
    printLeaf(root->left, ans);
    printLeaf(root->right, ans);
    
}

void printRight(TreeNode *root, vector<int> &ans){
    if(root == NULL || (root->left == NULL && root -> right == NULL)){
        return;
    }
    if(root->right != NULL){
        printRight(root->right, ans);
    }
    else{
        printRight(root->left, ans);
    }
    ans.push_back(root->data);
}

vector<int> traverseBoundary(TreeNode *root)
{
	// Write your code here.
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    // pushing root node to the vector
    ans.push_back(root->data);

    //printing left nodes
    printLeft(root->left, ans);

    //printing leaf nodes from left of the root node
    printLeaf(root->left, ans);

    //printing leaf nodes from the right of the root node
    printLeaf(root->right, ans);

    //printing the right nodes in reverse
    printRight(root->right, ans);

    return ans;



}


void printVector(vector<int> v){
    for(int i = 0; i<v.size(); i++){
        cout<< v[i] << " ";
    }
}

int main() {
    // Creating nodes
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<int> v = traverseBoundary(root);
    printVector(v);

    cout << endl;
    return 0;
}
