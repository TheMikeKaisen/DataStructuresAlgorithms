// reversing a stack using recursion

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();

    insertAtBottom(s, element);

    s.push(num);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()){
        return ;
    }
    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack, num);

}

int main(){
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    reverseStack(s1);
    return 0;
}