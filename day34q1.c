#include <stdio.h>

void insertElement(int arr[], int *n, int pos, int value) {
    if (pos < 0 || pos > *n) {
        printf("Invalid position\n");
        return;
    }

    // Shift elements to the right to make space
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    (*n)++;
}

int main() {
    int arr[10] = {10, 20, 30, 40};
    int n = 4;
    int pos = 2;
    int value = 25;

    insertElement(arr, &n, pos, value);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}