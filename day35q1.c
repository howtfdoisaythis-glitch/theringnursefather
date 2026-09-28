#include <stdio.h>

int secondLargest(int arr[], int n) {
    if (n < 2) {
        printf("Array must contain at least 2 elements\n");
        return -1;
    }

    int largest = arr[0];
    int second = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Second largest: %d\n", secondLargest(arr, n));
    return 0;
}