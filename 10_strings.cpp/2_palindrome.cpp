// palindrome string
#include<iostream>
using namespace std;

int main(){
    string s = "geeks";
    int n = s.length();
    int low = 0; 
    int high = n-1;
    int i = 0;
    while(low<=high){
        if(s[low] != s[high]){
            i = 1;
            break;
        }
        low++;
        high--;
    }
    if(i==1){
        cout << "is not palindrome";
    }
    else{
        cout << "is palindrome." << endl;
    }
    return 0;
}