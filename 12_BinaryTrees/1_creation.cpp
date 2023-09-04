#include<iostream>
using namespace std;

struct node{
    int data;
    int *left;
    int *right;
    node(int d){
        this->data = d;
        left = NULL;
        right = NULL;
    }
};
int main(){
    node* root = new node(10);
    return 0;
}