// Program to print the sum of n natural numbers.

#include<iostream>
using namespace std;

// Tail Recursive
// Time complexity: Theta(n) -> the function will run n times
// Space complexity: Theta(n) -> the functions will be stored in function call stack n times for n input
// Auxiliary space: Theta(1) -> No extra space required to store in function call stack
int sum(int n1, int n2 = 1){
    if(n1==1){
        return n2;
    }
    return sum(n1-1, n1+n2);
}
int sum1(int n1){
    if(n1==0){
        return n1;
    }
    return n1 + sum1(n1-1);
}

int main(){
    int a = sum(7);
    cout << a << endl;
}