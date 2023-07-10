#include<iostream>
using namespace std;

int countMerge(int* a, int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1];
    int right[n2];
    int r = 0;
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
            r = r+ (n1-i);
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
    return r;
   
}

// divide and conquer algorithm
int countInv(int* arr, int l, int r){
    int res = 0;
    if(l<r){
        int mid = l+(r-l)/2;
        res += countInv(arr, l, mid);
        res += countInv(arr, mid+1, r);
        res += countMerge(arr, l, mid, r);
    }
    return res;
}

int main(){
    int arr[] = {40, 30, 20, 10};
    cout << countInv(arr, 0, 3)<<endl;
    return 0;
}