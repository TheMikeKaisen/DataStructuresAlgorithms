#include<iostream>
using namespace std;

int isprime(int n){
    for(int i=2; i<=n/2; i++){
        if(i%n==0){
            return -1;
        }
    }
    return 1;
}

int lcm(int a, int b){
    if((isprime(a)==1) && (isprime(b)==1)){
        return a*b;
    }
    else{
       int c = a>b?a:b; 
       int d = a<b?a:b; 
       for(int i = 1; i < d; i++){
        if((c*i)%d==0){
            return c*i;
            break;
        }
       }
       return 0;
    }
}
int main(){
    cout << isprime(5) << endl;
    int ab = lcm(4,6);
    cout << ab << endl;
    return 0;
}