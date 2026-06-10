// write a program to find x^n without pow().
// power calculator

#include <stdio.h>
int main() {
    int x, n, result = 1;     // initialised resiult to 1 because any number to the power of 0 is 1.
    printf("Enter base (x): ");   // x is the base and n is the power.

    scanf("%d", &x);
    printf("Enter power (n): ");


    scanf("%d", &n);


    
    for (int i = 0; i < n; i++) {
        result *= x; // multiplying x by itself n times
    }
    
    printf("%d^%d = %d", x, n, result);
    
    return 0;
}