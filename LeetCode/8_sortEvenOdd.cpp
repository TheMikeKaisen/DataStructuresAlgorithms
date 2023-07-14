#include<iostream>
using namespace std;
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL||head->next->next==NULL) return head;
        ListNode* h1 = head, *c1 = head;
        ListNode *h2 = head->next, *c2 = head->next;
        if(c2->next->next == NULL){
            h1->next = c2->next;
            h1->next->next = c2;
            c2->next = NULL;
            return c1;
        }
        while ((h1->next != NULL && h1->next->next != NULL) && (h2->next != NULL && h2->next->next != NULL)){
            if(h1->next!=NULL||h1->next->next!=NULL){
                h1 ->next = c2->next;
                h1 = h1->next;
            }
            if(h2->next!=NULL||h2->next->next!=NULL){
                c2 -> next = c2 ->next->next;
                c2 = c2->next;
            }
        }
        h1->next = h2;
        return c1;
    }
};