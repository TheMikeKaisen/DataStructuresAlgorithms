// stock span problem
// this is my own method of solivng this problem which would take two stacks and time complexity of O(n^2);

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> stockSpan(int arr[], int n){
    vector<int> v;
    stack<int> s1; 
    stack<int> s2;

    v.push_back(1);
    s1.push(arr[0]);
    s2.push(1);
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>=s1.top()){
            int s = 1;
            while(!s1.empty() && s1.top()<arr[i]){
                s += s2.top();
                s2.pop();
                s1.pop();
            }
            s2.push(s);
            s1.push(arr[i]);
            v.push_back(s);
        }
        else{
            s2.push(1);
            s1.push(arr[i]);
            v.push_back(1);
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
    // int arr[] = {13,15,12,14,16,8,6,4,10,30};

    int arr[] = {40,30,20,10};
    vector<int> v = stockSpan(arr, 4);
    printVector(v);
    return 0;
}