// write a program to print prime number in range.
#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers are:\n");

    for (i = start; i <= end; i++) {
        if (i < 2)
            continue;

        isPrime = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}