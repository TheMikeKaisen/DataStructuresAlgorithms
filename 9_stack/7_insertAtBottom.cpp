// to insert an element at the bottom of a stack
#include<iostream>
#include<stack>
using namespace std;
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int> s;
    
    while(myStack.empty()!=1){
        s.push(myStack.top());
        myStack.pop();
    }
    myStack.push(x);
    while(s.empty()!=1){
        myStack.push(s.top());
        s.pop();
    }
    return myStack;
}
int main(){
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    pushAtBottom(s1, 5);
    return 0;
}