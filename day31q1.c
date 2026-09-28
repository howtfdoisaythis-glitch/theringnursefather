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

    int target;
    if (scanf("%d", &target) != 1) {
        free(values);
        return 1;
    }

    for (int index = 0; index < n; ++index) {
        if (values[index] == target) {
            printf("Found at index %d\n", index);
            free(values);
            return 0;
        }
    }

    printf("-1\n");
    free(values);
    return 0;
}
