// we are given an array and we have to find the next smaller element 

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nextSmaller(int arr[], int n){
    vector<int> v;
    stack<int> s;
    v.push_back(-1);
    s.push(arr[n-1]);
    for(int i = n-2; i>=0; i--){
        if(arr[i]<s.top()){
            while(!s.empty() && arr[i]<s.top()){
                s.pop();
            }
            if(s.empty()){
                v.push_back(-1);
                s.push(arr[i]);
                }
            else{

                v.push_back(s.top());
                s.push(arr[i]);
            }
        }
        else{
            v.push_back(s.top());
            s.push(arr[i]);
        }
        
    }
    reverse(v.begin(), v.end());
    return v;
 }
 void printVector(vector<int> v){
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {4, 5, 2, 10, 8};
    vector<int> v = nextSmaller(arr, 5);
    printVector(v);
    return 0;
}