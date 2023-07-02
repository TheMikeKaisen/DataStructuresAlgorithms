// program to delete the first element of the list

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

// deleting the first element
Node* DelHead(Node* head){
    Node* curr = head;
    head = curr ->next;
    delete curr;
    return head;
}
int main(){
    Node *head = new Node(300);
    head->next= new Node(400);
    head->next->next = new Node(500);
    head->next->next->next = new Node(600);

    head = DelHead(head);
    printList(head);
    cout << endl ;
    return 0;
}