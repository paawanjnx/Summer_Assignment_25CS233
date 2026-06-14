// write a profram to write a function for perfect number.
#include<stdio.h>
// perfect number is a number that is equal to sum of its divisors but not itself.

int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main() {
    int n;
    printf("Enter a number: "); // we will use if else case.
    scanf("%d", &n);
    if (isPerfect(n)) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }
    return 0;
}