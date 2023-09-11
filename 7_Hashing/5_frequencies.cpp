// to print the frequencies of each element 
#include<iostream>
#include<unordered_map>
using namespace std;
void freq(int arr[], int n){
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++){
        m[arr[i]] ++;
    }

    for(auto i = m.begin(); i != m.end(); i++){
        cout << i->first << " "<< i->second << endl;
    }
}
int main(){
    int arr[] = {3, 3, 4, 4, 4, 21, 3, 2, 21, 21, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    freq(arr, n);
    return 0;
}