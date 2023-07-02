// program to delete the end element from the list

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

// delete element from the end
Node* delEnd(Node* head){
    Node* curr = head;
    while(curr->next->next !=NULL){
        curr = curr->next;
    }
    curr->next = NULL;
    return head;
}
int main(){
    Node *head = new Node(300);
    head->next= new Node(400);
    head->next->next = new Node(500);
    head->next->next->next = new Node(600);

    head = delEnd(head);
    printList(head);
    cout << endl;
    return 0;
}