// write a program to find GCD of two numbers.
#include <stdio.h>
int main() {
    int no1, no2, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &no1, &no2);

    for (gcd = (no1 < no2) ? no1 : no2; gcd > 0; gcd--) {
        if (no1 % gcd == 0 && no2 % gcd == 0) {
            break;
        }
    }

    printf("GCD of %d and %d is: %d", no1, no2, gcd);

    return 0;
}
