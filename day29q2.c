#include <stdio.h>

int main(void) {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int maximum = array[0];
    int minimum = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] > maximum)
            maximum = array[i];

        if (array[i] < minimum)
            minimum = array[i];
    }

    printf("Maximum element = %d\n", maximum);
    printf("Minimum element = %d\n", minimum);

    return 0;
}