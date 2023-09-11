// sub array with zero sum
#include<iostream>
#include<unordered_set>
using namespace std;
bool subArrayZero(int arr[], int n){
    unordered_set<int> s;
    s.insert(0);
    int count = 0;
    for(int i = 0; i < n ; i++){
        count = count + arr[i];
        if(s.find(count) != s.end()){
            return true;
        }
        else {
            s.insert(count);
            
        }
    }
    return false;
}
int main(){
    int arr[] = {5, 6, 0, 8};
    cout << subArrayZero(arr, 4) << endl;
    return 0;
}