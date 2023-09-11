// pair with given sum in unsorted array

#include<iostream>
#include<unordered_set>
using namespace std;

bool PairWithSum(int arr[], int n, int sum){
    unordered_set<int> s;

    for(int i = 0; i < n; i++){
        int a = sum -arr[i];
        if(s.find(a) != s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}
int main(){
    int arr[] = {3, 2, 8, 15, -8};
    cout << PairWithSum(arr, 5, 234) << endl ;
    return 0;
}