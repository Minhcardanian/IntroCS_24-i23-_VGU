#include <stdio.h>

int GCD(int a, int b) {
    if(a == 0 || b == 0) return a + b;
    while(a != b) {
        if(a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }
    return a;  // return a or b since a = b now
}


int main() {
    int a, b;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    
    int gcd = GCD(a, b);
    printf("The GCD of %d and %d is: %d\n", a, b, gcd);
    
    return 0;
}