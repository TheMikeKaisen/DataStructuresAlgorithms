
#include<iostream>

using namespace std;
int leftMostRepeating(string s){
    int n = s.length();
    int arr[256] = {0};
    for(int i = 0; i<n; i++){
        arr[s[i]] ++;
    }
    for(int i= 0; i<n; i++){
        if(arr[s[i]] == 1 ){
            return i;
        }
    }
    return -1;

}
int main(){
    string s = "geeksforgeeks";
    cout << leftMostRepeating(s) << endl;
    return 0;
}