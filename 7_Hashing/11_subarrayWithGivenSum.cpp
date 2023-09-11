// sub array with zero sum
#include<iostream>
#include<unordered_set>
using namespace std;
bool subArraySum(int arr[], int n, int sum){
    unordered_set<int> s;
    s.insert(sum);
    int count = sum;
    for(int i = 0; i < n ; i++){
        count = count + arr[i];
        if(s.find(count - sum) != s.end()){
            return true;
        }
        else {
            s.insert(count);
            
        }
    }
    return false;
}
int main(){
    int arr[] = {15, 2, 8, 10, -5, -8, 6};
    cout << subArraySum(arr, 7, 9) << endl;
    return 0;
}