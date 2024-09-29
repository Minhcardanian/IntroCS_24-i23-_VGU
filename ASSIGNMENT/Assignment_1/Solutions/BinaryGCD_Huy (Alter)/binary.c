#include <stdio.h>

int binaryGCD(int a, int b) {
    if (a == b)
        return a;
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if ((a & 1) == 0 && (b & 1) == 0)
        return binaryGCD(a >> 1, b >> 1) << 1;

    else if ((a & 1) == 0)
        return binaryGCD(a >> 1, b);

    else if ((b & 1) == 0)
        return binaryGCD(a, b >> 1);
    else if (a >= b)
        return binaryGCD((a - b) >> 1, b);

    else
        return binaryGCD((b - a) >> 1, a);
}

int main() {
    int a, b, gcd;

    printf("a and b: ");
    scanf("%d %d", &a, &b);

    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    gcd = binaryGCD(a, b);

    printf("GCD: %d\n", gcd);

    return 0;
}
