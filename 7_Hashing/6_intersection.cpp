// given two arrays, now we have to find the distinct element which is present in both the array
#include<iostream>
#include<unordered_set>
using namespace std;
void distinct(int arr1[], int arr2[], int n, int m){
    unordered_set<int> s1(arr1, arr1+n);
    unordered_set<int> s2(arr2, arr2 + m);

    for(int i : s1){
        if(s2.find(i) != s2.end()){
            cout << *s2.find(i) << endl;
        }
    }

    

}
int main(){
    int arr1[] = {3, 3, 2, 4, 5, 5};
    int arr2[] = {8, 7, 7, 3, 4, 5, 4, 3};
    distinct(arr1, arr2, 6, 8);
    return 0;
}