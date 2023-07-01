// A simple program to create a linked list.

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

// traversing through a linked list
void printList(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
}

// recursive method to print a linked list

void printList2(Node *head){
    Node *curr = head;
    if(curr == NULL)
        return;
    
    cout << curr->data << " ";
    printList2(curr->next);
}

int main(){
    // creating a linked list
    // List1
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = NULL;

    // a better way to create a linked list
    // List 2
    Node *h = new Node(300);
    h->next= new Node(400);
    h->next->next = new Node(500);

    // Iterative way to print a list
    printList(head);
    cout << endl;
    printList(h);
    cout << endl;

    // Recursive way to print a list
    printList2(head);
    cout << endl;
    }