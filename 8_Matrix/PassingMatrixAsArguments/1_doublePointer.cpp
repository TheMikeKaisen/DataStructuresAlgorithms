// double pointer approach of making a matrix
// this will only work with matrices made using double pointer method
#include<iostream>
using namespace std;

void print(int **arr, int m, int n){
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout << arr[i][j] << " ";
        }
    }
}
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
        }
    }

    print(arr, 3, 2);
    return 0;
}