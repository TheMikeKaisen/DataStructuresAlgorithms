/*
Auxiliary space : it is the order of growth of extra space or temporary space in terms of input size.
*/

#include<iostream>
using namespace std;

/* there no extra space required. so auxiliary space is THETA(1) and space complexity is THETA(n) */
int getsum1(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;

}

/*
A recursive program to add n numbers
*/
int getsum2(int n){
    if(n<=0){
        return 0;
    }
    else return n + getsum2(n-1);
}
int main() {
    int arr[] = {1, 2, 3, 4};
    int a = getsum1(arr, 4);
    cout<<a << endl;

    int b = getsum2(4);
    cout << b << endl;
}