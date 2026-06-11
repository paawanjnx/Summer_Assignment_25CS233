// write a program to recursive fibonacci.
#include <stdio.h>
int fib(int n)   // fib is function name of fibonacci.. (function call)

{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
    return 0;
}