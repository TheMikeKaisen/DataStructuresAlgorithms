// an easy but, unefficient way to create a matrix

#include<iostream>
using namespace std;

int main(){
    int arr[3][2] = {{1,2},
                     {3, 4},
                     {5, 6}};

    // int arr[3][2] = {1, 2, 3, 4, 5, 6}; // automatically interprets the dimensions
    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}