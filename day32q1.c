#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int firstSize;
    int secondSize;

    if (scanf("%d", &firstSize) != 1 || firstSize < 0) {
        return 1;
    }

    int *first = malloc((size_t)firstSize * sizeof(*first));
    if (firstSize > 0 && first == NULL) {
        return 1;
    }

    for (int index = 0; index < firstSize; ++index) {
        if (scanf("%d", &first[index]) != 1) {
            free(first);
            return 1;
        }
    }

    if (scanf("%d", &secondSize) != 1 || secondSize < 0) {
        free(first);
        return 1;
    }

    int *second = malloc((size_t)secondSize * sizeof(*second));
    if (secondSize > 0 && second == NULL) {
        free(first);
        return 1;
    }

    for (int index = 0; index < secondSize; ++index) {
        if (scanf("%d", &second[index]) != 1) {
            free(first);
            free(second);
            return 1;
        }
    }

    for (int index = 0; index < firstSize; ++index) {
        printf("%d ", first[index]);
    }
    for (int index = 0; index < secondSize; ++index) {
        printf("%d%s", second[index], index + 1 < secondSize ? " " : "");
    }
    printf("\n");

    free(first);
    free(second);
    return 0;
}
