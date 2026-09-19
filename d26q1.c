#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of groups: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int stars;

        if (i == 1)
            stars = 1;
        else if (i == 2)
            stars = 2;
        else if (i == 3)
            stars = 3;
        else
            stars = 4;

        for (j = 1; j <= stars; j++)
            printf("*\n");

        printf("\n");
    }

    return 0;
}