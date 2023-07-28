// max area of the rectangle with 1's in a matrix
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> prevSmaller(vector<int> arr, int n){
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
vector<int> nextSmaller(vector<int> arr, int n){
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

 //max area of a histogram
 int maxRectangle(vector<int> arr, int n){
    int s = -1;
    vector<int> v1 = prevSmaller(arr, n);
    vector<int> v2 = nextSmaller(arr, n);
    for(int i = 0; i<n; i++){
        int a = v2[i] - v1[i];
        s = max(s, a*arr[i]);
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
    // example 1
    // int m = 3, n = 3;
    // int arr[3][3] = {{0, 1, 1}, 
    //                  {1, 1, 1}, 
    //                  {0, 1, 1},};
    
    //example 2
    // int m = 4, n = 4;
    // int arr[4][4] = {{0, 1, 1, 0}, 
    //                 {1, 1, 1, 1}, 
    //                 {1, 1, 1, 1},
    //                 {1, 1, 0, 0}};

    //example 3
    int m = 2, n = 2;
    int arr[2][2] = {{0, 0}, 
                      {0, 0}};
    int s = -1;
    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for(int j = 0; j<n; j++){
            if(arr[i][j] == 1 && i!=0){
                arr[i][j] += arr[i-1][j];
                v.push_back(arr[i][j]);
            }
            else{
                v.push_back(arr[i][j]);
            }
        }
        s = max(s, maxRectangle(v, v.size()));
        
    }
    
    cout << s << endl;
    return 0;
}