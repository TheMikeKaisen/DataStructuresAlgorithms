// a program to print numbers from 1 to n
#include<iostream>
using namespace std;

// for each function call, this function would do some constant amount of work, therefore the time complexity = T(n) + T(1). Therefore, the worst time complexity = Theta(n)

// each function will be stored in the function call stack untill base condition satisfies. Thus auxiliary space it would take will be Theta(n)
void fun(int n){
    if (n == 0){
        return;
    }
    fun(n-1);
    cout << n << ' ';
}

int main(){
    fun(30);
    cout << endl;
    return 0;
}