// program to get sum of digits 

#include<iostream>
using namespace std;

// time complexity = Theta(number of digits)
int sum(int n, int k = 0){
    if(n/10==0){
        return (k+n);
    }
    return sum(n/10, k+(n%10));
}

int main(){
    cout << sum(567) << endl;
    return 0;
}