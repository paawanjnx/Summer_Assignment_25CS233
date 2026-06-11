// write a program to print reverse star pattern.
#include <stdio.h>
int main() {
    int i, j, rows;  // i is rows and j is columns.
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for(i = rows; i >= 1; i--) { // i-- because pattern is reversed unlke question 29.
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}