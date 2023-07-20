// linked list implementation of stack

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

class myStack{
    public:
    Node *head;
    int cap;
    myStack(){
        head = NULL;
        cap = 0;
    }

    void push(int x){
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        cap++;
    }
    void pop(){
        if(cap>0){
            Node *curr = head;
            head = head->next;
            delete curr;
            cap--;
        }
        else{
            cout << "stack underflow" << endl;
        }
    }
    int peek(){
        return head->data;
    }
    int size(){
        return cap;
    }
    bool isEmpty(){
        if(cap==0){
            return true;
        }
        return false;
    }
};
int main(){
    myStack s;
    s.pop();
    cout<< s.isEmpty() << endl;
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(10);
    s.push(12);

    cout << s.peek()<< endl;
    s.pop();
    cout << s.peek()<< endl;
    cout << s.size() << endl;
    return 0;
}