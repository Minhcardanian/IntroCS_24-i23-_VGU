#include <stdio.h>

int find_lcm(int a, int b) {
    int larger = (a > b) ? a : b;
    int lcm = larger;
    while (lcm % a != 0 || lcm % b != 0) {
        lcm += larger;
    }
    return lcm;
}

int find_gcd(int a, int b) {
    int lcm = find_lcm(a, b);
    return (a * b) / lcm;
}

int main() {
    int a, b;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    
    printf("GCD of %d and %d is: %d\n", a, b, find_gcd(a, b));
    
    return 0;
}
