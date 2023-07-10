// to find the last occurance an element in an array

#include<iostream>
using namespace std;

// first occurance
int lastOccurance(int arr[], int mid, int n){
    
    while((arr[mid+1]==arr[mid]) && mid<(n-1)){
        mid++;
    }
    return mid;
}
// recursive solution
int BS(int arr[], int low, int high, int x, int n){

    int mid = (low+high)/2;
    if(low>high){
        return -1;
    }
    if(arr[mid]==x) return lastOccurance(arr, mid, n);

    else if(x<arr[mid]) return BS(arr, low, mid-1, x, n);
    return BS(arr, mid+1, high, x, n);

}
int main(){
    int arr[] = {3, 6, 12, 12, 15, 15, 15, 17, 17, 17, 20, 20, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << BS(arr, 0, n-1, 17, n) << endl; 
    return 0;
}
