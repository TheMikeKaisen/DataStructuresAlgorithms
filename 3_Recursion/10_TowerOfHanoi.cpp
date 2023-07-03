/*
The Tower of Hanoi problem is a classic mathematical puzzle that involves three rods and a set of disks of different sizes. The objective is to transfer all the disks from one rod to another, using the third rod as an auxiliary, following three rules: 1) Only one disk can be moved at a time, 2) A larger disk cannot be placed on top of a smaller one, and 3) All disks must be transferred to the target rod.

To solve the Tower of Hanoi problem recursively, follow these steps:

1. Base case: If there is only one disk, move it directly to the target rod.
2. Recursive step: Move n-1 disks from the source rod to the auxiliary rod using the target rod as the temporary auxiliary.
3. Move the remaining largest disk from the source rod to the target rod.
4. Recursive step: Move the n-1 disks from the auxiliary rod to the target rod using the source rod as the temporary auxiliary.

Repeat these steps recursively until all disks are successfully moved to the target rod. The solution follows a simple pattern and is efficient, with a time complexity of O(2^n).
*/

#include<iostream>
using namespace std;

// tower of hanoi
void TOH(int n, char A, char B, char C){
    if(n==1){
        cout << "move 1 from "<< A << " to " << C << endl;
        return;
    }
    TOH(n-1, A, C, B);
    cout << "move " << n << "from "<< A <<" to "<< C <<endl;
    TOH(n-1, B,A,C);
}
int main(){
    TOH(3, 'A', 'B', 'C');
    return 0;
}