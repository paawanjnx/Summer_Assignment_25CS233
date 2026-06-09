// program to check armstrong number.
#include <stdio.h>
int main()
{
    int num, originalNum, remainder, result = 0; 
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    if (result == num)
        printf("%d armstrong number .", num);  // An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
    else
        printf("%d not an Armstrong number.", num);
    return 0;
}