// to display the top view of a binary tree

#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<map>

// Define a struct for tree nodes
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        this->data = d;
        left = nullptr;
        right = nullptr;
    }
};

// top view
vector<int> BottomView(Node *root)
    {
        map<int, int> mapNode;
        queue<pair<Node*, int> > q;
        vector<int> ans;
        if(root == NULL ){
            return ans;
        }
        
        q.push(make_pair(root, 0));
        
        while(!q.empty()){
            pair<Node*, int> temp = q.front();
            Node* frontNode = temp.first;
            q.pop();
            
            int hd = temp.second;
            mapNode[hd] = frontNode->data;
            
            if(frontNode -> left){
                q.push(make_pair(frontNode->left, hd - 1));
            }
            if(frontNode -> right){
                q.push(make_pair(frontNode->right, hd + 1));
            }
            
        }
        
        for(auto i: mapNode){
            ans.push_back(i.second);
        }
        return ans;
        
    }

// Function to print a vector of integers
void printVector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

int main() {
    // Creating nodes to build a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Perform vertical order traversal and store the result in a vector
    vector<int> v = BottomView(root);

    // Print the result vector
    printVector(v);

    cout << endl;
    return 0;
}
