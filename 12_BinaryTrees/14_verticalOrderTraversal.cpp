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

// Function to perform vertical order traversal
vector<int> verticalOrder(Node *root)
{
    // Create a map to store nodes at different horizontal distances and levels
    map<int, map<int, vector<int> > > nodes;

    // Create a queue for level-order traversal
    queue<pair<Node*, pair<int, int> > > q;

    // Create a vector to store the final result
    vector<int> ans;

    // Check if the root is NULL (empty tree)
    if (root == nullptr) {
        return ans;
    }

    // Enqueue the root node with horizontal distance 0 and level 0
    q.push(make_pair(root, make_pair(0, 0)));

    // Perform level-order traversal
    while (!q.empty()) {
        // Dequeue a node and its horizontal distance and level
        pair<Node*, pair<int, int> > temp = q.front();
        Node* frontNode = temp.first;
        q.pop();

        int hd = temp.second.first;
        int lvl = temp.second.second;

        // Store the node's data in the map based on hd and lvl
        nodes[hd][lvl].push_back(frontNode->data);

        // Enqueue left child with adjusted hd and lvl
        if (frontNode->left) {
            q.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));
        }

        // Enqueue right child with adjusted hd and lvl
        if (frontNode->right) {
            q.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));
        }
    }

    // Flatten the map into the ans vector
    for (auto i : nodes) {
        for (auto j : i.second) {
            for (auto k : j.second) {
                ans.push_back(k);
            }
        }
    }

    // Return the result vector
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
    vector<int> v = verticalOrder(root);

    // Print the result vector
    printVector(v);

    cout << endl;
    return 0;
}
