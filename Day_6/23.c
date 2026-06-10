//write a program to count set bits in a number.
#include <stdio.h>
int main () {
    int n, count = 0;  // count is 0 initialiased..
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (n > 0) {
        count += n & 1; // using bitwise AND to check if the least bit is set
        n = n  >> 1;   // right shift to check the next bit
    }
    
    printf("Number of set bits: %d", count);
    
    return 0;
}