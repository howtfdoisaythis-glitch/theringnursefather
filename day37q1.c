#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    return a < 0 ? -a : a;
}

int main(void) {
    long long a, b;

    printf("Enter two numbers: ");
    if (scanf("%lld %lld", &a, &b) != 2) {
        return 1;
    }

    long long lcm = (a == 0 || b == 0) ? 0 : (a / gcd(a, b)) * b;
    if (lcm < 0) {
        lcm = -lcm;
    }

    printf("LCM: %lld\n", lcm);
    return 0;
}