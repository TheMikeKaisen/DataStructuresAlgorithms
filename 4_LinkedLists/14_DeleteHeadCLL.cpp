// program to delete the haed of a circular linked list

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


Node* deleteHead(Node* head){
    if(head==NULL || head->next==head){
        head = NULL;
        return head;
    }

    Node* curr = head;
    do{
        curr = curr->next;
    }while(curr->next!=head);
    curr->next = head->next;
    curr = head;
    head = head->next;
    delete curr;
    return head;
}
int main()
{

    Node *head = new Node(300);
    head->next = new Node(400);
    head->next->next = new Node(500);
    head->next->next->next = new Node(600);
    head->next->next->next->next = head;
    
    head = deleteHead(head);
    printList(head);
    cout << endl ;

    return 0;
}
