// Space complexity :
//     it is the order of growth of memory or ram space in terms of input size.
// To denote space space complexity we can use bot big O and Theta notations but we cannot use Omega notation because it would then denote the minimum space required which is irrelevant.

#include<iostream>
using namespace std;

/* returns sum of n numbers in space complexity O(1) or Theta(1) */ 
int getSum1(int n){
    return n*(n+1)/2;
}

/* Another way to add two numbers. Here, for any value of n, only 3 variables is needed -> sum, i and n 
    Thus space complexity is  O(1) of Theta(1) */
int getSum2(int n){
    int sum = 0;
    for (int i = 1; i<=n; i++){
        sum += i;
    }
    return sum;
}

/* Here, the size depends on the size of the array. if n = 100, array is going to be of size 100. if n = 1000 then size of array will be 1000. Thus space complexity will Theta(n) i.e. it will grow linearly , EXACT BOUND(NOT UPPER BOUND, NOT LOWER BOUND).*/
int getsum3(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;

}
int main() {
    int a = getSum1(100);
    cout << a << endl;

    int b = getSum2(234);
    cout << b << endl;

    int arr[] = {10, 20, 30, 40, 50, 60};
    int c = getsum3(arr, 6);
    cout << c << endl;
 }