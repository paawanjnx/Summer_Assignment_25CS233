// wap to recursive reverse number.
#include <stdio.h>
#include <math.h> // used here because we include pow and log10 function in reverse function.
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", reverse(n));
    return 0;
}
int reverse(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) * (int)pow(10, (int)log10(n)) + reverse(n / 10);
}
