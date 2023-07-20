// creating stack using stacks

#include<iostream>
using namespace std;
class myStack{
    public :
    int *arr;
    int top;
    int capacity;
    myStack(int size){
        arr = new int[size];
        capacity = size;
        top = -1;

    }
    void push(int x){
        if(top<capacity-1){
            top++;
            arr[top] = x;
        }
        else{
            cout << "stack overflow" << endl;
        }
    }
    void pop(){
        if(top > -1){
            top--;
        }
        else{
            cout<<"stack underflow" << endl;        }
    }
    int peek(){
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }
};
int main(){
    myStack s(6);
    
    s.push(5);
    s.push(7);
    s.push(9);
    s.push(12);
    s.push(54);
    s.push(59);
    s.push(8); // stack overflow

    cout<< s.peek() << endl;
    s.pop();
    cout<< s.peek() << endl;
    s.pop();
    cout << s.isEmpty() <<endl;
    return 0;
}