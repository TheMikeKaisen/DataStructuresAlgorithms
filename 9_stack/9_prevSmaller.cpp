// we will be giver an array and we have to print the smaller element at the left of the array.

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

 vector<int> prevSmaller(int arr[], int n){
    vector<int> v;
    stack<int> s;
    v.push_back(-1);
    s.push(arr[0]);
    for(int i = 1; i<n; i++){
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
    vector<int> v = prevSmaller(arr, 5);
    printVector(v);
    return 0;
}