// binary search
/*
Binary search is an efficient algorithm for finding an element in a sorted array. It works by repeatedly dividing the search space in half until the target element is found or determined to be absent. This algorithm has a time complexity of O(log n), where n is the number of elements in the array. At each step, the search space is halved, making it faster than linear search. The space complexity is O(1) since it only requires a few variables to keep track of indices. Binary search is widely used in various applications, including searching and maintaining sorted data efficiently.
*/

#include<iostream>
using namespace std;
// iterative solution
int BinarySearch(int arr[], int n, int x){
    int low = 0, high = n-1;
    while(low<=high){
        
        int mid = (low+high)/2;
        if(x == arr[mid]){
            return mid;
        }
        else if(x < arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

// recursive solution
int BS(int arr[], int low, int high, int x){

    int mid = (low+high)/2;
    if(low>high){
        return -1;
    }
    if(arr[mid]==x) return mid;

    else if(x<arr[mid]) return BS(arr, low, mid-1, x);
    return BS(arr, mid+1, high, x);

}
int main(){
    int arr[] = {23, 45, 55, 56, 68, 90};
    // cout << BinarySearch(arr, 6, 23) << endl;

    cout << BS(arr, 0, 5, 57);
    cout << endl;
    return 0;
}