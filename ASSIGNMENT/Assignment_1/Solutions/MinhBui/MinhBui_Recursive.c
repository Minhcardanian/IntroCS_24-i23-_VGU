#include <stdio.h>

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}

int main() {
    int a, b;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    
    int result = GCD(a, b);
    printf("The GCD of %d and %d is: %d\n", a, b, result);
    
    return 0;
}
