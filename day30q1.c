#include <stdio.h>

int main(void) {
    int n, evenCount = 0, oddCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);

        if (array[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Even numbers = %d\n", evenCount);
    printf("Odd numbers = %d\n", oddCount);

    return 0;
}