#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char> a;
    for(int i = 0; i<s.length(); i++){
    char v = s[i];
    if(a.empty()){
        a.push(v);
    }
    else if((a.top()=='{' && s[i] == '}')||
            (a.top()=='(' && s[i] == ')')||
            (a.top()=='[' && s[i] == ']')){
        a.pop();
    }
    
    else{
        a.push(v);
    }

}
    if(a.empty()){
        return true;
    }
    return false;
}
int main(){
    string s = "{[[{}]]}";
    string f = "{[[{]}])]}";
    cout << isValidParenthesis(s)<< endl;
    cout << isValidParenthesis(f)<< endl;

    return 0;
}