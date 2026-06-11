/* write a program to print character triangle.
A
AB
ABC
ABCD
ABCDE
*/
#include <stdio.h>
int main() {
    int i, j, rows;  // i is rows and j is columns.
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);  // here the entered integer is printed instead of * like in previous question.
        }
        printf("\n");
    }
    
    return 0;
}