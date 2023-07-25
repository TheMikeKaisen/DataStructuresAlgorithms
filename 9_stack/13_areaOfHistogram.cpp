// Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

#include<iostream>
#include<stack>
#include<vector>
using namespace std;


vector<int> prevSmaller(int arr[], int n){
    vector<int> v;
    stack<int> s;
    v.push_back(0);
    s.push(0);
    for(int i = 1; i<n; i++){
        if(arr[i]<=arr[s.top()]){
            while(!s.empty() && arr[i]<= arr[s.top()]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(0);
                s.push(i);
                }
            else{

                v.push_back(s.top()+1);
                s.push(i);
            }
        }
        else{
            v.push_back(s.top()+1);
            s.push(i);
        }
        
    }
    return v;
 }

// next smaller element
vector<int> nextSmaller(int arr[], int n){
    vector<int> v;
    stack<int> s;
    v.push_back(n);
    s.push(n-1);
    for(int i = n-2; i>=0; i--){
        if(arr[i]<=arr[s.top()]){
            while(!s.empty() && arr[i]<arr[s.top()]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(n);
                s.push(i);
                }
            else{

                v.push_back(s.top());
                s.push(i);
            }
        }
        else{
            v.push_back(s.top());
            s.push(i);
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
    int arr[] = {1, 1};
    // vector<int> v = nextSmaller(arr, 7);
    int n = sizeof(arr)/sizeof(arr[0]);
    int s = -1;
    vector<int> v1 = prevSmaller(arr, n);
    vector<int> v2 = nextSmaller(arr, n);
    for(int i = 0; i<n; i++){
        int a = v2[i] - v1[i];
        s = max(s, a*arr[i]);
    }
    printVector(prevSmaller(arr, n));
    cout <<endl;
    printVector(nextSmaller(arr, n));
    cout << endl ;
    cout << s << endl;
    return 0;
}