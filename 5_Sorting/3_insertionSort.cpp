// Insertion Sort
/*

Insertion sort is a simple sorting algorithm that builds the final sorted array one element at a time. It iterates through the list and for each element, it compares it with the elements on its left and inserts it in the correct position in the sorted portion of the array. This process continues until the entire list is sorted. Insertion sort has a time complexity of O(n^2) but performs well for small lists or partially sorted arrays. It is efficient for almost sorted or small datasets and is an in-place sorting algorithm.

*/
#include<iostream>
using namespace std;

void insertSort(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        int j = i -1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr [j];
            j--;
        }
        arr[j+1] = key;
        
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
    int arr[] = {20, 5, 40, 60, 10, 30};
    insertSort(arr, 6);
    printArr(arr, 6);
    return 0;
}