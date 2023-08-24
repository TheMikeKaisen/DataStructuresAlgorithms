#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> rev(queue<int> q)
    {
        stack<int> s;
        queue<int> a;
        for(int i = 0; i<=q.size(); i++){
            s.push(q.front());
            q.pop();
        }
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        return q;
    }
int main(){
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);
    queue<int> q2 = rev(q);
    
    return 0;
}