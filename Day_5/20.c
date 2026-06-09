// write a program to find largest prime factor.
#include <stdio.h>

int main() {
    long long n, i, largest = -1;

    printf("Enter a number: ");
    scanf("%lld", &n);

    // Remove all factors of 2 hers
    while (n % 2 == 0) {
        largest = 2;
        n = n / 2;
    }

    // Check odd factors!
    for (i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            largest = i;
            n = n / i;
        }
    }

    
    if (n > 2) {
        largest = n;
    }

    printf("Largest Prime Factor = %lld\n", largest);

    return 0;
}
