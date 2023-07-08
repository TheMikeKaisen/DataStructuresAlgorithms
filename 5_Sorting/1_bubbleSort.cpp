// bubble sort :
/*
The key idea behind bubble sort is that in each iteration, the largest (or smallest, depending on the sorting order) element "bubbles" up to its correct position. After each iteration, one more element is sorted at its final position, reducing the range of unsorted elements.

bubble sort may not be the most efficient sorting algorithm, especially for large lists, as it has a worst-case time complexity of O(n^2). 
*/

#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int* arr, int n){
    for(int i = 0; i < n; i++){
        int swapped = 0;
        for(int j = 0; j < n-i-1; j ++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = 1;
            }

        }
        if(swapped == 0) break;

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
    int arr[] = {5, 10, 3, 8, 4};
    
    bubbleSort(arr, 5);
    printArr(arr, 5);
    
    return 0;
}