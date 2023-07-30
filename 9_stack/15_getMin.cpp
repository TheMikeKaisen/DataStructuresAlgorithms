// to get the minimum element from a stack

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
stack<int> s;
int num = 0;
void push(int x){
    if(s.empty()){
    num = x;
    } 
    else{
        if(num>x){
            num = x;
        }
    }
    s.push(x);

}
void pop(){
    if(s.empty()) return ;
    else{
    s.pop();

    }
}
int getMin(stack<int> &s){
    return num;
}
int main(){
    push(67);
    push(50);
    push(79);
    pop();
    pop();
    cout << s.top() << endl;
    cout << getMin(s) << endl;
    return 0;
}