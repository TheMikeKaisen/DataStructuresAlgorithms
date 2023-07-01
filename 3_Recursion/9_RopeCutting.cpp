// we will be given the length of the rope and 3 parameters. We will have to find the maximum number of cuts we can make in the rope using the values of the parameters.

// ex: n = 23, a = 11, b = 9, c = 12 -> we can make maximum of two cuts of length 12 + 11 therefore the result is 2. ex: n = 5, a = 2, b = 4, c = 1 ->we can make maximum of five cuts of length 1+1+1+1+1

#include<iostream>
using namespace std;
// The time complexity of the provided rope function is exponential, specifically O(3^n). This is because at each recursive call, the function branches out into three separate recursive calls
// space complexity = O(n)
//Auxiliary space = (On)
int rope(int n, int a, int b, int c, int k = 0) {
    if (n < 0) return -1;
    else if (n == 0) return k;
    return max(max(rope(n - a, a, b, c, k + 1),rope(n - b, a, b, c, k + 1)),rope(n - c, a, b, c, k + 1));
    // max takes only two arguments
}


int main (){
    cout << rope(23, 12, 9, 11) << endl;
    cout << rope(5, 4, 2, 6) << endl;
    cout << rope(9, 2, 2, 2) << endl;
    return 0;
}