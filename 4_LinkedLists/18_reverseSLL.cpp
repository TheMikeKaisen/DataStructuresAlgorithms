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

Node* reverseList(Node* head) {
         if (head == NULL || head->next == NULL) {
        return head;
    }
        Node* c1 = head->next;
        Node* c2 = c1->next;
        head->next = NULL;
        while(c1!=NULL){
            c1->next = head;
            head = c1;
            c1 = c2;
            if(c2==NULL){
                break;
            }
            c2 = c2->next;
        }
        return head;
    }
int main(){

    return 0;
}