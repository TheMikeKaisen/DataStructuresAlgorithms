// Selection Sort 
/*
Selection sort is a simple sorting algorithm that repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the element at the beginning of the sorted portion. This process is repeated until the entire list is sorted. The algorithm divides the list into two parts: the sorted portion at the beginning and the unsorted portion at the end. The selection sort has a time complexity of O(n^2) and is not efficient for large lists, but it is easy to understand and implement.
*/

#include<iostream>
#include<algorithm>
using namespace std;

void SelectSort(int* arr, int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }
        
    }
    
}

// printing the array
void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {8, 2, 14, 7};
    SelectSort(arr, 4);
    printArr(arr, 4);
    return 0;
}