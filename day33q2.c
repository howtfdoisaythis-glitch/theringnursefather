#include <stdio.h>

void insertSorted(int arr[], int *n, int value) {
    int i = *n - 1;

    // Shift all larger elements to the right
    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the value at the correct position
    arr[i + 1] = value;
    (*n)++;
}

int main() {
    int arr[10] = {10, 20, 30, 40};
    int n = 4;
    int value = 25;

    insertSorted(arr, &n, value);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}