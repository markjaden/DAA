#include <stdio.h>

// Function for Linear Search
int linearSearch(int arr[], int n, int target) {
    if (n == 0)
        return -1;
    if (arr[n - 1] == target)
        return n - 1;
    return linearSearch(arr, n - 1, target);
}

// Function for Binary Search
int binarySearch(int arr[], int low, int high, int target) {
    if (low > high)
        return -1;

    // Simplify the mid calculation
    int mid = (low + high) / 2;

    if (arr[mid] == target)
        return mid;
    if (arr[mid] > target)
        return binarySearch(arr, low, mid - 1, target);
    return binarySearch(arr, mid + 1, high, target);
}

int main() {
    // Variable declarations
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    // Call Linear Search
    int linResult = linearSearch(arr, n, target);
    if (linResult != -1)
        printf("Element found at index %d using Linear Search.\n", linResult);
    else
        printf("Element not found using Linear Search.\n");

    // Call Binary Search
    int binResult = binarySearch(arr, 0, n - 1, target);
    if (binResult != -1)
        printf("Element found at index %d using Binary Search.\n", binResult);
    else
        printf("Element not found using Binary Search.\n");

    return 0;
}
