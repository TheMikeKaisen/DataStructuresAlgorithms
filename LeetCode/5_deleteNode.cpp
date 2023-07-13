#include<iostream>
using namespace std;

struct ListNode{
    int data;
    ListNode *next;
    ListNode(int x){
        data = x;
        next = NULL;
    }
};
int countN(ListNode* head){
        int i = 1;
        while(head->next!=NULL){
            head = head->next;
            i++;
        }
        return i;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next == NULL){
            head = NULL;
            return head;
        } 
        int n1 = countN(head) - n;
        if(n1==0){
            return head->next;
        }
        int i = 0;  
        ListNode* curr = head;
        while(i<(n1-1)){
            curr = curr -> next;
            i++;
        }
       
        curr->next = curr->next->next;
        
        return head;
    }


int main(){

    return 0;
}