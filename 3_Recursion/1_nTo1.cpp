// A program to print numbers from n to 1

#include<iostream>
using namespace std;

// this function will take THETA(n) time complexity and THETA(1) auxiliary space.
void fun(int n){
    if (n==0){
        return ;
    }
    cout << n << " ";
    fun(n-1);
    }

int main(){
    fun(5);
    cout<< endl;
    return 0;
}