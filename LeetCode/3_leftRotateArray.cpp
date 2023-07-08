// left rotate an array by one

#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void leftRotate(int arr[], int n, int k)
{
    int j = 0;
    while (j < k)
    {
        int n1 = arr[0];
        int i = 0;
        while (i < (n - 1))
        {
            arr[i] = arr[i + 1];
            i++;
        }
        arr[i] = n1;
        j++;
    }
    printArr(arr, n);
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    leftRotate(arr, 7, 3);
    // int arr[] = {-1, -100, 3, 99};
    // leftRotate(arr, 4, 2);
    return 0;
}