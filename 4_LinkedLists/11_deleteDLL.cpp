// deleting the head of a doubly linked list

// Doubly linked list : in a singly linked list, each element had an id of the next element of the list and the next id of last item was NULL. Whereas in doubly linked list, each element would contain the data and the id of both previous and next element in the list. previous item of the first element and the next item of the last item are both NULL.

#include<iostream>
using namespace std;

// doubly linked list
struct Node{
    int data;
    Node *next;
    Node *prev;

    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void printList(Node *head){
    Node *curr = head;
    if(curr == NULL)
        return;
    
    cout << curr->data << " ";
    printList(curr->next);
}

Node* deleteHead(Node* head){
    if(head==NULL || head->next == NULL) return head;
    Node* curr = head;
    head = head->next;
    delete curr;
    return head;
}
int main(){
    Node* head = new Node(4);
    Node* temp1 = new Node(6);
    Node* temp2 = new Node(8);
    Node* temp3 = new Node(10);

    // creating doubly linked list.
    head->next = temp1;
    temp1->next = temp2;
    temp2 ->next = temp3;

    temp1->prev = head;
    temp2->prev = temp1;
    temp3->prev =temp2;

    head = deleteHead(head);
    printList(head);
    cout << endl;
    

    return 0;
}