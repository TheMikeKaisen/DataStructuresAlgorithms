// converting infix to prefix
#include<iostream>
#include<stack>
using namespace std;

void infixToPrefix(string str){
    stack<char> s;
    
    for(int i = 0; i<str.length(); i++){
        if(s.empty() && (str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/' || str[i]=='(' ||
           str[i] == '^')){
            s.push(str[i]);
        }
        else if(str[i]=='(') s.push(str[i]);
        else if(str[i]==')'){
            while(s.top()!='('){
                cout << s.top()<< " ";
                s.pop();
            }
            s.pop();
        }
        else if((str[i]=='/' && s.top()=='/')||
            (str[i]=='+' && s.top()=='+')||
            (str[i]=='-' && s.top()=='-')||
            (str[i]=='*' && s.top()=='*')||
            (str[i]=='^' && s.top()=='^')){
                cout << s.top() << " ";
                s.pop();
        }
        else if(str[i]=='/' && s.top()=='*'){
            cout<<s.top() <<" ";
            s.pop();
            s.push(str[i]);
        }
        else if((str[i]=='^') && (s.top()=='+' || s.top()=='-' || s.empty() ||
                 s.top()=='*' || s.top()=='/')){
            s.push(str[i]);
        }
        else if((str[i]=='/' || str[i]=='*') && (s.top()=='+' || s.top()=='-' || s.empty())){
            s.push(str[i]);
        }
        else if(str[i]=='+'||str[i] == '-'){
            while(!s.empty()){
                if(s.top()=='(') break;
                cout<<s.top()<<" ";
                s.pop();
            }
            s.push(str[i]);
        }
        else{
            cout<<str[i] << " ";
        }
    }
    while(s.empty()!=1){
        cout<<s.top() << " ";
        s.pop();
    }
}
int main(){
    string s = "a+b*(c-d)";
    infixToPrefix(s);
    cout<<endl;
    return 0;
}