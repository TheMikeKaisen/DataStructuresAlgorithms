#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* currA = headA, *currB = headB;
        while(currA!=currB){
            currA = (currA==NULL)?headB:currA->next;
            currB = (currB==NULL)?headA:currB->next;

        }  
        return currA;
    }
};

int main(){

    return 0;
}

