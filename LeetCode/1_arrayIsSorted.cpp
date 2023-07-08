// check if the array is sorted

#include<iostream>
using namespace std;

int isSorted(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        if(arr[i] < arr[i-1]) return -1;
    }
    return 1;
    
}
int main(){
    int arr[] = {2, 3, 8, 5, 6};
    cout << isSorted(arr, 5) << endl;
    return 0;
}