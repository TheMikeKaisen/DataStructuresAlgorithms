// creating cicular doubly linked list

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node* prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

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

int main(){
    Node* head = new Node(45);
    Node* temp1 = new Node(55);
    Node* temp2 = new Node(78);
    Node* temp3 = new Node(60);

    head->next = temp1;
    temp1->next= temp2;
    temp2->next= temp3;
    temp3->next = head;

    head->prev = temp3;
    temp3->prev= temp2;
    temp2->prev= temp1;
    temp1->prev= head;
    
    printList(head);
    cout << endl;
    return 0;
}