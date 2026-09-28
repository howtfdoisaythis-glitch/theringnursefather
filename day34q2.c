#include <stdio.h>

void deleteElement(int arr[], int *n, int index) {
    if (index < 0 || index >= *n) {
        printf("Invalid index\n");
        return;
    }

    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int index = 2;

    deleteElement(arr, &n, index);

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}