// creating and printint a circular linked list
// inserting at the beginning 
// 

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
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

// inserting at the beginning of a circular linked list
Node* insertBegin(Node* head, int x){
    Node* temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    Node* p = head;
    while(p->next != head){
        p = p->next;
    }
    p->next = temp;
    temp->next= head;
    return temp;
}

// inserting at the end of a circular linked list
Node* insertEnd(Node* head, int x){
    Node* temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    Node* p = head;
    while(p->next != head){
        p = p->next;
    }
    p->next = temp;
    temp->next= head;
    return head;
}
int main()
{

    Node *head = new Node(300);
    head->next = new Node(400);
    head->next->next = new Node(500);
    // connecting last node to the head node
    head->next->next->next = head;

    // inserting at the beginning
    head = insertBegin(head, 145);
    printList(head);
    cout<<endl;
    
    // inserting at the end
    head = insertEnd(head, 550);
    printList(head);
    cout << endl;

    return 0;
}
