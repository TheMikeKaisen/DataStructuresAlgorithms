// This is an important quostion and is asked in many interviews
// finding next greater element in a vector or an array using stack

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void printVector(vector<int> v){
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout<< endl;
}
vector<int> nextGreater(int arr[], int n){
    stack<int> s;
    vector<int> v;
    for(int i = n-1; i>=0; i--){
        if(s.empty()){
            v.push_back(-1);
            s.push(arr[i]);
        }
        if(arr[i]<s.top()){
            v.push_back(s.top());
            s.push(arr[i]);
        }
        else{
            while(arr[i]>s.top() && s.empty()!=1){
                s.pop();
            }
            if(s.empty()==1){
                v.push_back(-1);
                s.push(arr[i]);
            }
            else{
                v.push_back(s.top());
                s.push(arr[i]);
            }
        }
    }
    reverse(v.begin(), v.end());
    return v;
}
int main(){
    int arr[] = {1, 15, 10, 8,6,12,9,18};
    vector<int> v = nextGreater(arr, 8);
    printVector(v);
    return 0;
}