// creating two stacks using one array

#include<iostream>
using namespace std;
class myStack{
    public:
    int *arr, cap, top1, top2;
    myStack(int size){
        arr = new int[size];
        cap = size;
        top1 = -1;
        top2 = cap;
    }

    void push1(int x){
        if(top1<top2-1){
            top1++;
            arr[top1] = x;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void push2(int x){
        if(top1<top2-1){
            top2--;
            arr[top2] = x;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop1(){
        if(top1>-1){
            top1--;
        }
        else{
            cout << "stack underflow" << endl;
        }
    }
    void pop2(){
        if(top2<cap){
            top2++;
        }
        else{
            cout << "stack underflow" << endl;
        }
    }
    int peek1(){
        return arr[top1];
    }
    int peek2(){
        return arr[top2];
    }

};
int main(){
    myStack s(6);
    s.push1(45);
    s.push2(56);
    s.push1(4);
    s.push1(8);
    s.push2(32);
    s.push2(3);

    cout << s.peek1()<<endl;
    cout << s.peek2() << endl;
    s.pop1();
    cout << s.peek1()<<endl;
    return 0;
}