#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // Normalize k if it is larger than the size of the array
    
    // Reverse the entire vector
    reverse(arr.begin(), arr.end());

    // Reverse the first k elements
    reverse(arr.begin(), arr.begin() + k);

    // Reverse the remaining elements
    reverse(arr.begin() + k, arr.end());
}
int main(){
    vector<int> v1;
    return 0;
}