// to count distinct element from the union of two unsorted arrays
#include<iostream>
#include<unordered_set>
using namespace std;

int countDistinct(int arr1[], int arr2[], int n, int m){
    unordered_set<int> s1(arr1, arr1 + n);
    unordered_set<int> s2(arr2, arr2 + m);

    int res = s1.size();

    for(int i : s2){
        if(s1.find(i) == s1.end()){
            res ++ ;
        }
    }
    return res;

}
int main(){ 
    int arr1[] = {3, 3, 3};
    int arr2[] = {3, 3};
    cout << countDistinct(arr1, arr2, 3, 2) << endl;
    return 0;
}