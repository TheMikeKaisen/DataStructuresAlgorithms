// double pointer approach of making a matrix

#include<iostream>
using namespace std;

int main(){
    int m = 3, n = 2;
    int **arr;
    arr = new int *[m];
    for(int i = 0; i<m; i++){
        arr[i] = new int[m];
    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            arr[i][j] = i;
            cout<<arr[i][j]<<endl;
        }
    }
    return 0;
}