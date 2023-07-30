// to find if each characters of string 1 and present in string 2 and vice verse

#include<iostream>
using namespace std;

bool anagram(string s1, string s2, int n, int m){
    
    if(n!=m){
        return false;
    }
    int count[256] = {0};
    for(int i = 0; i<n; i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i = 0; i<256; i++){
        if(count[i] != 0) return false;
    }
    return true;
}
int main(){
    string s1 = "anagram";
    string s2 = "nabaram";
    int n = s1.length();
    int m = s2.length();
    cout << anagram(s1, s2, n, m) << endl;
    return 0;
}