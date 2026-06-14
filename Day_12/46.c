// wap to write a function to find armstrong number.
#include<stdio.h>   

int isArmstrong(int n) {
    int original = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;  // classic way to find last digit..
        sum += digit * digit * digit;
        n /= 10;
    }
    return original == sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n    );
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}