// program to merge two sorted arrays

#include<iostream>
using namespace std;

// printing the array
void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* mergeArr(int a[], int m, int b[], int n){
    int* c = new int[m+n]; // dynamically allocating memory, if not, then function cannot return the new array created.
    int i = 0, j=0, k=0;

    while(i<m && j<n){
        if(a[i] <= b[j]){
            c[k] = a[i];
            i++;
            k++;
        }
        else{
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while(i<m){
        c[k] = a[i];
        i++;
        k++;
    }
    while(j<n){
        c[k] = b[j];
        j++;
        k++;
    }
    return c;
}

int main(){
    int a[] = {10, 15, 20};
    int b[] = {5, 6, 6, 15};
    int* sortedArr = mergeArr(a, 3, b, 4);
    printArr(sortedArr, (3+4));
    delete[] sortedArr; // delete the dynamically allocated memory to avoid memory leakage
    return 0;
}