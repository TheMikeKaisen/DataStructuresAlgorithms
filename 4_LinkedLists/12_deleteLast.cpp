// deleting the last element of a linked list

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

Node* findLast(Node* curr) {
    if (curr->next->next == NULL)
        return curr;
    return findLast(curr->next);
}


// delete last element
Node* deleteLast(Node* head) {
    if (head == NULL)
        return head;
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return head;
    }
    Node* curr = findLast(head);
    delete curr->next;
    curr->next = NULL;
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

    head = deleteLast(head);
    printList(head);
    cout << endl;
    

    return 0;
}