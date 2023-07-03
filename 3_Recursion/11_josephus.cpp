// what is josephus problem?
/*

N people stand in a circle, and they are numbered from 1 to N. Starting from person 1, a counting-out game is played where every Kth person is eliminated and removed from the circle. The process continues until only one person remains, who is declared the winner.

*/

#include<iostream>
using namespace std;

int jos(int n , int k){
    if(n==1) return 0;

    return (jos(n-1, k) +k) %n;
}
int main(){
    cout << jos(5,3) << endl;
    return 0;
}