// program to check whether a string is palindrome or not
// ex: 'abba', 'crfrc',  etc
#include<iostream>
using namespace std;

// time complexity: Theta(n/2) =>Theta(n)
// space complexity: Theta(n/2) =>Theta(n)
// auxiliary space: Theta(1)
bool palindrome(string str, int start, int end){
    if (start>=end){
        return true;
    }
    return (str[start]==str[end] && palindrome(str, start+1, end -1));

}

int main(){
    string s = "sbbcbbs";
    cout << palindrome(s, 0, 6) << endl;
}