// write a program to print hollow square pattern.
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  "); // printing space for making hollow pattern. kyuki agar hum space nahi print karenge to pattern solid ho jayega. aur hume hollow pattern print karna hai.
            }
        }
        printf("\n");
    }

    return 0;
}