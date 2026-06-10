// write a program to convert decimal to binary
#include <stdio.h>
int main()
{
    int num, binary[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    while (num > 0) {
        binary[i] = num % 2;  // decimal to binary is converted by dividing the number by 2 and storing the remainder
        num = num / 2;
        i++; 
    }
    
    printf("Binary number: ");             // took help
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    
    return 0;
}