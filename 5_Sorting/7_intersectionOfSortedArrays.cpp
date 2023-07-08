// intersection of two sorted arrays

#include<iostream>
using namespace std;

void intersect(int a[], int m, int b[], int n){
    int i = 0, j = 0;
    while(i < m && j < n){
        if(i>0 && a[i]==a[i-1]){
            i++;
        }
        else if(a[i]< b[j]){
            i++;
        }
        else if(a[i]> b[j]){
            j++;
        }
        else{
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
   
}

int main(){
    int a[]={3, 5, 10, 10, 10, 15, 15, 15};
    int b[] = {5, 10, 10, 15, 20, 20};
    intersect(a, 8, b, 6);
    cout << endl;
    return 0;
}