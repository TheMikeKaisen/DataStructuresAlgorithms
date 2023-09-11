//Given an array with repeated elements, the task is to find the maximum distance between two occurrences of an element.

#include<iostream>
#include<unordered_map>
using namespace std;

int maxDiff(int arr[], int n){
    unordered_map<int , int > m1;
    unordered_map<int , int > m2;
    
    int ans = 0;
    for(int i = 0; i<n; i++){
        
        if(m1.find(arr[i]) == m1.end()){
            m1[arr[i]] = i;
        }
        m2[arr[i]] = i - m1[arr[i]];
        ans = max(ans, m2[arr[i]]);
    }
    return ans;
}
int main(){
    int arr[] = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2};
    cout << maxDiff(arr, 12) << endl;
    return 0;
}