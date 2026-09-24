#include <stdio.h>

int main(void) {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d:\n", n);

    for (int number = 2; number <= n; number++) {
        int isPrime = 1;

        for (int divisor = 2; divisor * divisor <= number; divisor++) {
            if (number % divisor == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", number);
    }

    return 0;
}