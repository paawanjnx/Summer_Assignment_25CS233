//write a program to write a function to find maximum.
#include <stdio.h>

// Function to find maximum of two numbers......
int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Maximum is %d\n", maximum(a, b));

    return 0;
}