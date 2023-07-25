// stock span
// this is a better and more efficient solution to solve stock span problem which would take only one stack and time somplexity of O(n);

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> stockSpan(int arr[], int n){
    vector<int> v;
    stack<int> s;
    v.push_back(1);
    s.push(0);
    for(int i = 1; i<n; i++){
        if(arr[i] <= arr[s.top()]){
            v.push_back(1);
            s.push(i);
        }
        else{
            int d;
            while(!s.empty() && arr[i] > arr[s.top()]){
                s.pop();
            }
            if(s.empty()){
                d = i + 1;
                v.push_back(d);
                s.push(i);
            }
            else{
                d = i - s.top();
                v.push_back(d);
                s.push(i);

            }
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
    int arr[] = {13,15,12,14,16,8,6,4,10,30};

    // int arr[] = {40,30,20,10};

    // int arr[] = {100, 80, 60, 70, 60, 75, 85};
    vector<int> v = stockSpan(arr, 10);
    printVector(v);
    return 0;
}