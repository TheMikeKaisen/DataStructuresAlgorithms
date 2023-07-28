#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// to find the maximum element to right
vector<int> maxRight(int arr[], int n){
    stack<int> s;
    vector<int> v;
    s.push(arr[n-1]);
    v.push_back(-1);
    for(int i =n-2; i >=0; i-- ){
        if(arr[i]>=s.top()){
            v.push_back(-1);
            s.push(arr[i]);
        }
        else{
            v.push_back(s.top());
        }
    }
    reverse(v.begin(), v.end());
    return v;
}

// to find the maximum element to the left
vector<int> maxLeft(int arr[], int n){
    stack<int> s;
    vector<int> v;
    s.push(arr[0]);
    v.push_back(-1);
    for(int i = 1; i < n; i++){
        if(arr[i]>=s.top()){
            v.push_back(-1);
            s.push(arr[i]);
        }
        else{
            v.push_back(s.top());
        }
    }
    return v;
}

// function to trap the rain water
int RainWaterTrap(int arr[], int n){
    int s = 0;
    vector<int> v1 = maxLeft(arr, n);
    vector<int> v2 = maxRight(arr, n);
    for(int i = 0; i < n; i++ ){
        if(v1[i] == -1 || v2[i]== -1){
            continue;
        }
        else if(v1[i] <= v2[i]){
            s += v1[i] - arr[i];
        }
        else{
            s += v2[i] - arr[i];
        }
    }
    return s;
}
void printVector(vector<int> v){
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> v1 = maxRight(arr, 12);
    vector<int> v2 = maxLeft(arr, 12);
    printVector(v1);
    printVector(v2);

    int num = RainWaterTrap(arr, 12);
    cout << num << endl;
    return 0;
}