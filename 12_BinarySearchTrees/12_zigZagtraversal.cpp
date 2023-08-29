
#include<iostream>
using namespace std;
#include <vector>
#include <queue>

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

vector <int> zigZagTraversal(node* root)
    {
    	// Code here
    	vector<int> result;
    if(root == NULL){
        return result;
    }

    queue<node*> q;
    q.push(root);

    bool leftToRight = true;
    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);

        for(int i = 0; i < size; i++){
            node *frontnode = q.front();
            q.pop();

            int index = leftToRight ? i : size - i - 1;
            ans[index] = frontnode->data;


            if(frontnode -> left){
                q.push(frontnode -> left);
            }

            if(frontnode -> right){
                q.push(frontnode -> right);
            }


        }
        for (int i = 0; i < size; i++) {
            result.push_back(ans[i]);
        }

        leftToRight = !leftToRight ;
    }
    return result;
    }

void printVector(vector<int> v){
    for(int i = 0; i<v.size(); i++){
        cout<< v[i] << " ";
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

    vector<int> v = zigZagTraversal(root);
    printVector(v);

    cout << endl;
    return 0;
}
