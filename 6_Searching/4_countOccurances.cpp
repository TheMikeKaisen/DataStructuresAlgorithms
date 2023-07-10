// program to count the number of occurances of an element in an array


#include<iostream>
using namespace std;

// first occurance
int firstOccurance(int arr[], int mid){
    while((arr[mid-1]==arr[mid]) && mid>0){
        mid--;
    }
    // counting the occurances
    int count = 1;
    while(arr[mid]==arr[mid+1]){
        mid++;
        count++;
    }
    return count;
}
// or we can store the value of first occurance in variable 'a' and last occurance in variable 'b' and return  b - a + 1


// recursive solution
int BS(int arr[], int low, int high, int x){

    int mid = (low+high)/2;
    if(low>high){
        return -1;
    }
    if(arr[mid]==x) return firstOccurance(arr, mid);

    else if(x<arr[mid]) return BS(arr, low, mid-1, x);
    return BS(arr, mid+1, high, x);

}
int main(){
    int arr[] = {3, 6, 12, 12, 15, 15, 15, 17, 17, 17, 20};
    cout << BS(arr, 0, 10, 12) << endl;
    return 0;
}