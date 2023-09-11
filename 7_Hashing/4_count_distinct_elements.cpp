#include<iostream>
#include<unordered_set>
using namespace std;
int countDistinctElement(int arr[], int n){
    unordered_set<int> s(arr, arr+n); // set only have unique values present.
    return s.size();
}
int main(){
    int arr[] = {3, 4, 4, 5, 3, 3, 2, 78};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << countDistinctElement(arr, n) << endl;
    return 0;
}