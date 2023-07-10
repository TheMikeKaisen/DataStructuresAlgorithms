// two pointer approach 
// We will be given a sorted array and a value 's' . We have to return true, if there exists a pair whose sum is 's'.

#include<iostream>
using namespace std;

bool TwoPointer(int arr[], int n, int sum){
    int l = 0;
    int h = n-1;
    while(l<h){
        if((arr[l]+arr[h]) == sum){
            return true;
        }
        if(( arr[l]+arr[h])  > sum ) h--;
        else l++ ;

    }
    return false;
}
int main(){
    int arr[] = {2, 5, 8, 12, 30};
    cout << TwoPointer(arr, 5, 0) << endl;

    return 0;
}