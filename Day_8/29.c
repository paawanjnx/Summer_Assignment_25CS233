// write a program in c to print half pyramid pattern.
#include <stdio.h>
int main() {
    int i, j, rows;  // i is rows and j is columns.
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}