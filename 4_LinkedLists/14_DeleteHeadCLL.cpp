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

Node* deleteHead(Node* head){
    if(head==NULL || head->next==head){
        head = NULL;
        return head;
    }
    
    Node* curr = head;
    head = head->next;
    delete curr;
    return head;
}
int main()
{

    Node *head = new Node(300);
    head->next = new Node(400);
    head->next->next = new Node(500);
    // connecting last node to the head node
    head->next->next->next = head;



    return 0;
}
