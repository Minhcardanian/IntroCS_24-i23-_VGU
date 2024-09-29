#include <stdio.h>

int naiveGCD(int a, int b) {
    int gcd = 1;
    int min = (a < b) ? a : b;

    for (int i = 1; i <= min; i++) {
        if ((a % i == 0) && (b % i == 0)) {
            gcd = i;
        }
    }

    return gcd;
}

int main() {
    int a, b, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    gcd = naiveGCD(a, b);

    printf("GCD: %d\n", gcd);

    return 0;
}
