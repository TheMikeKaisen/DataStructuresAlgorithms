// merge sort

/*
Merge sort is a divide-and-conquer algorithm that sorts an array by repeatedly dividing it into two halves, sorting them separately, and then merging the sorted halves. It begins by dividing the array into single-element subarrays, which are already considered sorted. Then, it merges adjacent subarrays, repeatedly comparing the smallest elements and placing them in order. This process continues recursively until a single sorted array is obtained. Merge sort has a time complexity of O(n log n) and is considered a stable sorting algorithm.
*/

#include<iostream>
using namespace std;
// merge function
void mergeFunc(int* a, int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++){
        left[i] = a[low + i];
    }

    for (int i = 0; i < n2; i++){
        right[i] = a[mid + 1 + i];
    }

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2){
        if (left[i] <= right[j]){
            a[k] = left[i];
            i++;
        }
        else{
            a[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1){
        a[k] = left[i];
        i++;
        k++;
    }
    while (j < n2){
        a[k] = right[j];
        j++;
        k++;
    }
   
}

// divide and conquer algorithm
void mergeSort(int* arr, int l, int r){
    if(l<r){
        int mid = l+(r-l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        mergeFunc(arr, l, mid, r);
    }
}

// printing the array
void printArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {45, 32, 76, 28, 90};
    mergeSort(arr, 0, 4);
    printArr(arr, 5);
    return 0;
}