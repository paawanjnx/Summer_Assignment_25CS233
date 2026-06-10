// write a program to convert binary to decimal.
#include <stdio.h>
int main() {
    int binary[32], decimal = 0, i = 0, num;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    
    while (num > 0) {
        binary[i] = num % 10;  // binary to decimal is converted by multiplying the binary digit by 2 raised to the power of its position and summing them up
        num = num / 10;
        i++;
    }
    
    for (int j = 0; j < i; j++) {
        decimal += binary[j] * (1 << j); // using bitwise shift to calculate power of 2
    }
    
    printf("Decimal number: %d", decimal);
    
    return 0;
}