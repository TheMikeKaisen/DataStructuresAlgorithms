// program to insert at the beginning of a linked list
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

// inserts a node at the beginning
Node* insertBegin(Node *head, int x){
    Node* newHead = new Node(x);
    newHead->next=head;
    return newHead;
}

// print the list
void printList(Node *head){
    Node *curr = head;
    if(curr == NULL)
        return;
    
    cout << curr->data << " ";
    printList(curr->next);
}

int main(){
    Node *head = new Node(300);
    head->next= new Node(400);
    head->next->next = new Node(500);

    head = insertBegin(head, 30);
    printList(head);
    cout << endl;
}