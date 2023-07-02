// insert at any giver position of a linked list

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
void printList(Node *head){
    Node *curr = head;
    if(curr == NULL)
        return;
    
    cout << curr->data << " ";
    printList(curr->next);
}

// function to insert any element at any given postition
Node* insertAny(Node* head, int pos, int element){
    Node* curr = head;
    int i = 1;
    while(i != pos-1){
        curr = curr->next;
        i++;
    }
    Node* newEl = new Node(element);
    newEl->next = curr->next;
    curr->next = newEl;
    return head;
}
int main(){
    Node *head = new Node(300);
    head->next= new Node(400);
    head->next->next = new Node(500);
    head->next->next->next = new Node(600);

    head = insertAny(head, 3, 450);
    printList(head);
    return 0;
}