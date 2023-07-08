// we will be giver an array, low value,  mid value and high as input.
// elements from low to mid and mid to high are sorted. We have to return the sorted array.

#include<iostream>
using namespace std;

// printing the array
void printArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// merge function
void mergeFunc(int a[], int low, int mid, int high){
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
    printArr(a, high + 1);
}

int main(){
    int arr[] = {10, 20, 40, 20, 30};
    mergeFunc(arr, 0, 2, 4);
    return 0;
}
