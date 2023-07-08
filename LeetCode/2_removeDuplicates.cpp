// removing duplicates from the array

#include<iostream>
using namespace std;
void printArr(int arr[], int n){
    for(int i = 0; i<=n; i++){
        cout << arr[i] << " ";
    }
}
void removeDuplicate(int arr[], int n){
    int i = 0, j = 0, k=0;
    while(j<n){
        if(arr[j]==arr[i]){
            j++;
        }
        else{
            arr[i+1] = arr[j];
            i++;
            k++;
        }
    }
    printArr(arr, k);

}
int main(){
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 4, 4, 6, 6, 7, 8, 8};
    removeDuplicate(arr, 14);
    cout << endl;
    return 0;
}