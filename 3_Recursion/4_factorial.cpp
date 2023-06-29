// program to write factorial of a number

#include<iostream>
using namespace std;

// This is not a tail recursive method.
// Time complexity THETA(1)
// Auxiliary space Theta(n)
int fact(int n){
    if (n==0){
        return 1;
    }
    return n* fact(n-1);
}

// This is a tail recursive solution 
// Time complexity would be Theta(n)
// Space complexity Theta (1ææ)
int fact2(int n1, int n2 = 1){
    if(n1==1){
        return n2;
    }
    return fact2(n1-1, n1*n2);
}

int main(){
    int a = fact(30);
    cout << a <<endl;

    int b = fact2(30);
    cout<<b<< endl;
}