//wap to write function for pallindrome number
#include<stdio.h>

int isPalindrome(int n) { // function to check the palindromee.
    int original = n;
    int reverse = 0;
    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return original == reverse;
}
// palindrome is a number that remains the same when its digits are reversed.
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPalindrome(n)) {
        printf("%d is a palindrome number.\n", n);
    } else {
        printf("%d is not a palindrome number.\n", n);
    }
    return 0;
}