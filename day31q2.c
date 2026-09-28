#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    int *values = malloc((size_t)n * sizeof(*values));
    if (n > 0 && values == NULL) {
        return 1;
    }

    for (int index = 0; index < n; ++index) {
        if (scanf("%d", &values[index]) != 1) {
            free(values);
            return 1;
        }
    }

    for (int left = 0, right = n - 1; left < right; ++left, --right) {
        int temporary = values[left];
        values[left] = values[right];
        values[right] = temporary;
    }

    for (int index = 0; index < n; ++index) {
        if (index > 0) {
            printf(" ");
        }
        printf("%d", values[index]);
    }
    printf("\n");

    free(values);
    return 0;
}
