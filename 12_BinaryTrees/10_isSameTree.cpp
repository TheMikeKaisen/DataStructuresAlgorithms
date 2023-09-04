// to check if two of the given trees are identical.
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

bool isSameTree(node* p, node* q) {
        if(p==NULL && q == NULL){
            return true;
        }
        if(p == NULL && q != NULL ){
            return false;
        }
        if(q == NULL && p != NULL ){
            return false;
        }

        bool left = isSameTree(p-> left, q->left);
        bool right = isSameTree(p->right, q->right);

        bool val = p->data == q->data;

        if(left && right && val){
            return true;
        }
        return false;
    }

int main() {
    // Creating nodes
    node* root1 = new node(1);
    root1->left = new node(2);
    root1->right = new node(2);
    root1->left->left = new node(3);
    root1->left->right = new node(3);
    root1->left->left->left = new node(4);
    root1->left->left->right = new node(4);


    node* root2 = new node(1);
    root2->left = new node(2);
    root2->right = new node(2);
    root2->left->left = new node(3);
    root2->left->right = new node(3);
    root2->left->left->left = new node(4);
    root2->left->left->right = new node(4);

    cout << isSameTree(root1, root2);

    cout << endl;
    return 0;
}
