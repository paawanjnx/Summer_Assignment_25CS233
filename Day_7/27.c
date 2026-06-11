// write a program to recursive sum of digits.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}
int sum(int n) // fn call
{
    if (n == 0)
        return 0;
    return n % 10 + sum(n / 10);
}
