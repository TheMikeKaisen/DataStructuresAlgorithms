// median of two sorted arrays in O(logn) time complexity and O(1) space complexity 

#include <iostream>
using namespace std;

double findMedian(int arr1[], int m, int arr2[], int n) {
    // Ensuring arr1 is smaller or equal in size to arr2
    if (m > n)
        return findMedian(arr2, n, arr1, m);

    int begin = 0;
    int end = m-1;
    int partitionX, partitionY, maxX, maxY, minX, minY;
    const int MAX = INT_MAX;
    const int MIN = INT_MIN;

    while (begin <= end) {
        partitionX = (begin + end) / 2;
        partitionY = (m + n + 1) / 2 - partitionX;

        maxX = (partitionX == 0) ? MIN : arr1[partitionX - 1];
        maxY = (partitionY == 0) ? MIN : arr2[partitionY - 1];

        minX = (partitionX == m) ? MAX : arr1[partitionX];
        minY = (partitionY == n) ? MAX : arr2[partitionY];

        if (maxX <= minY && maxY <= minX) {
            // Found the median

            if ((m + n) % 2 == 0) {
                return (max(maxX, maxY) + min(minX, minY)) / 2.0;
            } else {
                return max(maxX, maxY);
            }
        } else if (maxX > minY) {
            end = partitionX - 1;
        } else {
            begin = partitionX + 1;
        }
    }

    // If the arrays are not sorted or have invalid input
    return -1.0;
}

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {5, 15, 25, 30, 35, 55, 65, 75, 85};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    double medianValue = findMedian(arr1, size1, arr2, size2);
    cout << "Median: " << medianValue << endl;

    return 0;
}
