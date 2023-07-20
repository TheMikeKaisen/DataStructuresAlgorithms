// we will be given an array, for each element we have to return the previous greater element

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void printVector(vector<int> v){
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
vector<int> prevGreater(int arr[], int n){
    stack<int> s;
    vector<int> v;
    for(int i = 0; i<n; i++){
        if(s.empty()){
            v.push_back(-1);
            s.push(arr[i]);
        }
        if(arr[i] < s.top()){
            v.push_back(s.top());
            s.push(arr[i]);
        }
        else{
            while(s.empty()!=1 && arr[i]>s.top()){
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
    }
    return v;
}
int main(){
    int arr[] = {5, 15,10,8,6,12,9,18};
    vector<int> v = prevGreater(arr, 8);
    printVector(v);
    return 0;
}