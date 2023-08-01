// to check if the string is subsequent string 

#include<iostream>
using namespace std;

bool isSubSeq(string s1, string s2, int n, int m){
    int j=0;
    for(int i = 0; i<n && j<m; i++){
        if(s2[j]==s1[i]){
            j++;
        }
        
    }
    return (j==m);
}
int main(){
    string s = "abcd";
    cout << isSubSeq(s, "asd", 4, 3) << endl;
    // cout << s.sort() << endl;

    return 0;
}