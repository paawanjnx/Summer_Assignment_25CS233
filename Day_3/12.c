// program to find LCM of two numbers.
#include <stdio.h>
int main() {
    int number1, number2, lcm;    // cm stands for common multiple.


    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    lcm = (number1 > number2) ? number1 : number2;

    while (1) {
        if (lcm % number1 == 0 && lcm % number2 == 0) {
            break;
        }
        lcm++;
    }

    printf("LCM of %d and %d is: %d", number1, number2, lcm);

    return 0;
}   