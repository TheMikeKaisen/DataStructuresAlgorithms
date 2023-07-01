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

// insert at the end of the list
Node* insertEnd(Node* head, int x){
    Node* element = new Node(x);
    Node* curr = head;
    while(curr->next != NULL){
        curr = curr -> next;
    }
    curr -> next = element;
    element->next = NULL;
    return head;
}
int main(){
    Node *head = new Node(300);
    head->next= new Node(400);
    head->next->next = new Node(500);

    head = insertEnd(head, 789);
    printList(head);
    cout << endl;
    
    return 0;
}