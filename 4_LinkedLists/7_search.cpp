// searching element in linked list

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

//  iterative searching
int search(Node* head, int x){
    Node* curr = head;
    int i = 1;
    while(curr != NULL){

        if(curr->data == x){
            break;
        }
        curr=curr->next;
        i++;

    }
    if(curr == NULL) return -1;
    return i;
}

// recursive search
int search2(Node* head, int x, int k = 1){
    if (head == NULL) return -1;
    if (head->data == x) return k;

    return search2(head->next, x, k+1);
}
int main(){
    Node *head = new Node(300);
    head->next= new Node(400);
    head->next->next = new Node(500);
    head->next->next->next = new Node(600);

    // int val = search(head, 30);
    int val = search2(head, 200);
    cout<<val<<endl;
    return 0;
}