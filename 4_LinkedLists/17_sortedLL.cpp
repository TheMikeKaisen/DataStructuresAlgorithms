// An input will be given along with a sorted linked list. We have to insert the element in the correct position so that the linked list would remain sorted.

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
Node* insertSort(Node* head, int x){
    Node* curr = head;
    Node* curr1 = new Node(x);
    if(head==NULL){
        return curr1;
    }
    else if((head->data > curr1->data)){
        curr1->next = head;
        return curr1;
    }
    while(curr->next != NULL){
        if(curr1->data < curr->next->data){
            curr1 ->next = curr->next;
            curr->next = curr1;
            return head;
        }
        curr = curr->next;
    }
    if(curr->next == NULL){
        curr->next = curr1;
    }
    return head;
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    head = insertSort(head, 45);
    printList(head);
    cout << endl;

    return 0;
}