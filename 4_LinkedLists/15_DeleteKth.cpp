// program to delete Kth element of circular linked list

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

// printing the values of circular linked list
void printList(Node *head)
{
    if (head == NULL)
        return;
    
    Node* p = head;
    do{
        cout<< p->data << " ";
        p = p->next;
    }while(p!=head);


}

Node* DeleteKth(Node* head, int k){
    if(head == NULL || head -> next == head){
        head = NULL;
        return head;
    }
    Node* curr = head;
    for(int i = 1; i<(k-1); i++){
        curr = curr->next;
    }
    Node* c = curr->next;
    curr ->next = c->next;
    delete c;
    return head;
}
int main(){
    Node *head = new Node(300);
    head->next = new Node(400);
    head->next->next = new Node(500);
    head->next->next->next = new Node(600);
    // connecting last node to the head node
    head->next->next->next->next = head;

    head = DeleteKth(head, 3);
    printList(head);
    cout<<endl;

    // Node* h = new Node(30);
    // h->next = h;
    // h = DeleteKth(h, 4);
    // printList(h);
    return 0;
}