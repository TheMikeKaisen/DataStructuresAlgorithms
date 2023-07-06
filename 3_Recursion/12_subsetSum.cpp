// we will be given a sum and an array. We have to find the number of subsets who adds upto sum.

#include<iostream>
using namespace std;

int subSet(int arr[], int n, int sum){
    if(n==0){
        return (sum==0)?1:0;
    }
    return subSet(arr, n-1, sum) + subSet(arr, n-1, sum - arr[n-1]);
}
int main(){
    int arr[] = {10, 20, 15};
    cout<< subSet(arr, 3, 25);
    cout << endl;
    return 0;
}