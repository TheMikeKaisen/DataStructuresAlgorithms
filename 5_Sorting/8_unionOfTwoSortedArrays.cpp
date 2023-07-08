#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

void unions(int a[], int m, int b[], int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && (a[i] == a[i - 1]))
        {
            i++;
        }
        if (j > 0 && (b[j] == b[j - 1]))
        {
            j++;
        }
        if (a[i] == b[j])
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < m)
    {
        if (a[i] != a[i - 1])
        {
            cout << a[i] << " ";
            i++;
        }
        i++;
    }
    while (j < n)
    {
        if (b[j] != b[j - 1])
        {
            cout << b[j] << " ";
            j++;
        }
        j++;
    }
}
int main()
{
    int a[] = {10, 20, 30, 40};
    int b[] = {18, 21, 23, 24, 30, 38};
    unions(a, 4, b, 6);
    cout << endl ;

    return 0;
}
